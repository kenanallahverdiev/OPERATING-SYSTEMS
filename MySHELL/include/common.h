/*
Abdul Qadir Faizy   - b161210553-2A
Kenan Allakhverdiev - g151210557-1B
Bahramullah Arayan  - g161210553-2A
Bakhruz Valiev      - g151210555-1C
Yalçın Mete         - g141210403-2A
*/
#ifndef COMMON_H
#define COMMON_H

#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 
#include<unistd.h> 
#include<sys/types.h> 
#include<sys/wait.h> 
#include<readline/readline.h> 
#include<readline/history.h>
#include <signal.h>

static int SIZE;

static int INDEX;

static int LOCK = 1;

#define clear() printf("\033[H\033[J") //yeni satir
#define MAXCOM 1000
#define MAXLIST 100 

static int PSIZE;

static int LAST_INDEX;

#define MAX_ARRAY_SIZE 5
static int PIPES[MAX_ARRAY_SIZE][2];
static int ARRAY[MAX_ARRAY_SIZE];

#endif
