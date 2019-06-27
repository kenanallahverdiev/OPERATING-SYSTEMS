/*
Abdul Qadir Faizy   - b161210553-2A
Kenan Allakhverdiev - g151210557-1B
Bahramullah Arayan  - g161210553-2A
Bakhruz Valiev      - g151210555-1C
Yalçın Mete         - g141210403-2A
*/
#include "input.h"

int takeInput(char* str[MAXCOM]) 
{ 
    int i=0;
    char* buf;
    int sayac = 0;
    buf = readline(">"); 
    if (strlen(buf) != 0) 
    { 
        add_history(buf);
        for(i=0;i<MAXCOM;i++)
        {
            str[i]=strsep(&buf, ";");
            if(str[i]==NULL || !strcmp(str[i],"")) break;
        }
        return i; 
    }
    else 
    { 
        return 0; 
    } 
} 
