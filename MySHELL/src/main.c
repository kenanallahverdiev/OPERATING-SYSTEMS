/*
Abdul Qadir Faizy   - b161210553-2A
Kenan Allakhverdiev - g151210557-1B
Bahramullah Arayan  - g161210553-2A
Bakhruz Valiev      - g151210555-1C
Yalçın Mete         - g141210403-2A
*/
#include "additionalInfo.h"
#include "promt.h"
#include "input.h"
#include "parse.h"
#include "process.h"

int main() 
{ 

    char* inputString[MAXCOM], *parsedArgs[MAXLIST]; 
    char* parsedArgsPiped[MAXLIST][MAXLIST]; 
    int execFlag = 0; 
    int pipeSize=0;
    int parseAND=0;
    init_shell(); 
    int commantCount=0;
    init_BackProcessDoned();
    while (1) 
    {
        int i=0;
        printDir(); 

        if (!(commantCount=takeInput(inputString))) continue;//satir okuma
 
        for(i=0;i<commantCount;i++)
        {
            execFlag = processString(inputString[i],parsedArgs, parsedArgsPiped,&pipeSize,&parseAND);// 

            if (execFlag == 1) 
                execArgs(parsedArgs,parseAND); 
      
            if (execFlag == 2)
                execArgsPiped(parsedArgs, parsedArgsPiped,pipeSize,parseAND); 
        }
    } 
    return 0; 
}