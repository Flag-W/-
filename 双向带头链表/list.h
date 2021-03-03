#define _CRT_SECURE_NO_WARNINGS 1 
#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int LTDataType ;

typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode* prev;
	LTDataType data;
}ListNode;


ListNode* BuyListNode(LTDataType x);

void ListInit(ListNode** pphead);
void ListPrint(ListNode* phead);
void ListPushBack( ListNode* phead, LTDataType x);
void ListPopBack(ListNode* phead);
void ListPushFront(ListNode* phead, LTDataType x);
void ListPopFront(ListNode* phead);
ListNode* ListFind(ListNode* phead ,LTDataType x);
void ListInsert(ListNode* pos, LTDataType x);
void ListErease(ListNode* pos);
void ListDestory(ListNode* phead);

