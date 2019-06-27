/*
Abdul Qadir Faizy   - b161210553-2A
Kenan Allakhverdiev - g151210557-1B
Bahramullah Arayan  - g161210553-2A
Bakhruz Valiev      - g151210555-1C
Yalçın Mete         - g141210403-2A
*/
#include "common.h"

void execArgs(char** parsed,int parseAND) 
{ 
    pid_t pid = fork();

    if (pid < 0)
    {
        printf("Failed forking child..\n"); 
        return; 
    } 
    else if (pid == 0) 
    { 
        if (execvp(parsed[0], parsed) < 0) 
        { 
            printf("Could not execute command..\n"); 
        } 
        exit(0);
    } 
    else 
    {
        if(!parseAND) wait(NULL);

        return; 
    } 
} 

void execArgsPiped(char** parsed, char* parsedpipe[MAXLIST][MAXLIST],int pipeSize,int parseAND) 
{
    int p[2];
    int fd_in = STDIN_FILENO;
    pid_t pid;

    for (int i = 0; i < pipeSize; ++i) 
    {
        pipe(p);
        if ((pid = fork()) == -1)
        {
            exit(EXIT_FAILURE);
        }
        else if (pid == 0)
        {
            dup2(fd_in, 0);

            if (i + 1 != pipeSize) dup2(p[1], 1);

            close(p[0]);
            execvp(parsedpipe[i][0],parsedpipe[i]);
            exit(EXIT_FAILURE);

        } 
        else 
        {
            if(!parseAND) wait(NULL);

            close(p[1]);
            fd_in = p[0];
        }
    }
} 

static void quality(int sig, siginfo_t* info, void* context)
{
    int ok = 0;
    for(int i = 0; i < LAST_INDEX; i++)
        if(ARRAY[i] == info->si_pid)
            ok = 1;
    
    if(ok)
    {
        if(LAST_INDEX != INDEX)
            LAST_INDEX = INDEX;
        
        printf("[%d]retval :%d\n", info->si_pid, info->si_status);
        SIZE--;
    }
    else
        LOCK = 0;     
        
}

void init_BackProcessDoned()
{
    INDEX = 0;
    LAST_INDEX = 0;
    struct sigaction act;
    SIZE = 0;
    PSIZE = 0;
    memset(&act, '\0', sizeof(act));
    act.sa_sigaction = &quality;
    act.sa_flags = SA_SIGINFO;

    if(sigaction(SIGCHLD, &act, NULL) < 0)
    {
        perror("ERR ");
        exit(EXIT_FAILURE);
    }
}