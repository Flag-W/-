#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<stdlib.h>

typedef int SListDataType;

typedef struct SListNode
{
	SListDataType data;
	struct SListNode* next;
}SListNode;

void SListPushBack(SListNode** pphead, SListDataType x);
void SListPopBack(SListNode** pphead); 
void SListPushFront(SListNode** pphead, SListDataType x);
void SListPopFront(SListNode** pphead);
void SListPrint(SListNode* phead);
SListNode* SListFind(SListNode* phead, SListDataType x);


