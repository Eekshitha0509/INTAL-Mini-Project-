#ifndef BIGINT_H
#define BIGINT_H
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct{
    char digits[1000+1];
    int length;
    char sign;
}BIGINT;

//eclarations of functions

BIGINT createbigint(const char *str);
void printBIGINT(BIGINT n);
int BIGINTlength(BIGINT n);

#endif