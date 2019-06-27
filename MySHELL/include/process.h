/*
Abdul Qadir Faizy   - b161210553-2A
Kenan Allakhverdiev - g151210557-1B
Bahramullah Arayan  - g161210553-2A
Bakhruz Valiev      - g151210555-1C
Yalçın Mete         - g141210403-2A
*/
#ifndef PROCESS_H
#define PROCESS_H
#include "common.h"
void execArgs(char**,int); // pipe`siz proses
void execArgsPiped(char**, char*[MAXLIST][MAXLIST],int,int); //pipe`li
static void quality(int, siginfo_t*, void*);
void init_BackProcessDoned();
#endif