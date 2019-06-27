/*
Abdul Qadir Faizy   - b161210553-2A
Kenan Allakhverdiev - g151210557-1B
Bahramullah Arayan  - g161210553-2A
Bakhruz Valiev      - g151210555-1C
Yalçın Mete         - g141210403-2A
*/
#include "additionalInfo.h"

void init_shell() 
{ 
    clear(); 
    printf("------------------------------------------------------"
        "------------------------"); 
    printf("\n\n\n\t\t\t  ****TURKISH KABUK****");
    printf("\n\n\n\n------------------------------------------------------"
        "------------------------"); 
    char* username = getenv("USER"); 
    printf("\n\n\nKULLANICI: @%s\n", username);
    sleep(3); 
    clear(); 
} 
void openHelp() 
{ 
    puts(
            "\n***YARDIM MI LAZIM?***"
            "\nKOMUT LISTESI:"
            "\n>cd"
            "\n>ls"
            "\n>quit ...\n"
        ); 
  
    return; 
} 
int ownCmdHandler(char** parsed) 
{ 
    int NoOfOwnCmds = 4, i, switchOwnArg = 0; 
    char* ListOfOwnCmds[NoOfOwnCmds]; 
    char* username; 
  
    ListOfOwnCmds[0] = "quit"; 
    ListOfOwnCmds[1] = "cd"; 
    ListOfOwnCmds[2] = "yardim"; 
    ListOfOwnCmds[3] = "SELAM"; 
  
    for (i = 0; i < NoOfOwnCmds; i++) { 
        if (strcmp(parsed[0], ListOfOwnCmds[i]) == 0) { 
            switchOwnArg = i + 1; 
            break; 
        } 
    } 
  
    switch (switchOwnArg) { 
    case 1: 
        printf("Hoşcakalın\n"); 
        exit(0); 
    case 2: 
        chdir(parsed[1]); 
        return 1; 
    case 3: 
        openHelp(); 
        return 1; 
    case 4: 
        username = getenv("USER"); 
        printf("\nVa Aleyküm Selam Hoş Geldiniz Saygıdeğer %s,'yardim' komutu ile yardim ala bilirsiniz.\n\n",username); 
        return 1; 
    default: 
        break; 
    }
    return 0; 
}