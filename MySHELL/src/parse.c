/*
Abdul Qadir Faizy   - b161210553-2A
Kenan Allakhverdiev - g151210557-1B
Bahramullah Arayan  - g161210553-2A
Bakhruz Valiev      - g151210555-1C
Yalçın Mete         - g141210403-2A
*/
#include "parse.h"

int getSize(char* str)
{
    int i;
    for(i=0;str[i]!='\0';i++); return i;
}
int parsePipe(char* str, char** strpiped) 
{ 
    int i; 
    for (i = 0; i < 500; i++) { 
        strpiped[i] = strsep(&str, "|"); 
        if (strpiped[i] == NULL) 
            break; 
    }
        if(i<2)return 0;
        else return i;
} 

void parseSpace(char* str, char** parsed) 
{ 
    int i; 
  
    for (i = 0; i < MAXLIST; i++) { 
        parsed[i] = strsep(&str, " "); 
  
        if (parsed[i] == NULL) 
            break; 
        if (strlen(parsed[i]) == 0) 
            i--; 
    } 
}

int parseAND(char* str)
{
    int i;
    for(i=getSize(str)-1;i>=0;i--) 
    {
        if(str[i]=='&')
        {
            str[i]=' ';
            return 1;
        }

        if(str[i]==' ') continue;

        else return 0;
    }
}
int processString(char* str, char** parsed, char* parsedpipe[MAXLIST][MAXLIST],int *pipeSize,int *parse_AND) 
{ 
    char* strpiped[500]; 
    int piped = 0;
    *parse_AND=parseAND(str);
    piped = parsePipe(str, strpiped); 
    *pipeSize=piped;
    if (piped) 
    { 
        for(int i=0;i<piped;i++)
        {
            parseSpace(strpiped[i],parsedpipe[i]);        
        }
    } 
    else 
    {
        parseSpace(str, parsed); 
    } 
  
    if (*pipeSize==0 && ownCmdHandler(parsed)) return 0; 
    else if(*pipeSize==0) return 1;
    else return 2;
} 