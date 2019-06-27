/*
Abdul Qadir Faizy   - b161210553-2A
Kenan Allakhverdiev - g151210557-1B
Bahramullah Arayan  - g161210553-2A
Bakhruz Valiev      - g151210555-1C
Yalçın Mete         - g141210403-2A
*/
#include "common.h"

void printDir() 
{ 
    char dir[1024];
    getcwd(dir, sizeof(dir)); 
    printf("%s", dir); 
    fflush(stdout);
} 