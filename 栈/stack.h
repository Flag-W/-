#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>

typedef int STDataType; 

typedef struct Stack
{
	STDataType* a;
	int top;
	int capacity;
}Stack;


void StackPrint(Stack* ps);
void StackInit(Stack* ps);
void StackPush(Stack* ps, STDataType x);
void StackPop(Stack* ps);
STDataType StackTop(Stack* ps);
int StackSize(Stack* ps);
int StackEmpty(Stack* ps);
void StackDestory(Stack* ps);