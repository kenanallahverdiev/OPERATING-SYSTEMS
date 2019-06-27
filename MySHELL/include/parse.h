/*
Abdul Qadir Faizy   - b161210553-2A
Kenan Allakhverdiev - g151210557-1B
Bahramullah Arayan  - g161210553-2A
Bakhruz Valiev      - g151210555-1C
Yalçın Mete         - g141210403-2A
*/
#ifndef PARSE_H
#define PARSE_H

#include "common.h"
#include "additionalInfo.h"
int getSize(char*);//uzunlukBulma
int parsePipe(char*, char**);// '|'(pipe) ayirma
void parseSpace(char*, char**); // bosluklara ayirma
int parseAND(char*);// '&'(arkaplan is) ayirma
int processString(char* str, char**, char*[MAXLIST][MAXLIST],int *,int *);//proses string
#endif