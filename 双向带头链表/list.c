#define _CRT_SECURE_NO_WARNINGS 1 
#include"list.h"


void ListPrint(ListNode* phead)
{
	assert(phead);
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

void ListInit(ListNode** pphead)
{
	*pphead = BuyListNode(0);
	(*pphead)->next = *pphead;
	(*pphead)->prev = *pphead;
}

ListNode* BuyListNode(LTDataType x)	
{
	ListNode* NewNode = (ListNode*)malloc(sizeof(ListNode));
	if (NewNode == NULL)
		exit(-1);
	else
	{
		NewNode->data = x;
		NewNode->next = NULL;
		NewNode->prev= NULL;

	}
	return NewNode;
}

void ListPushBack(ListNode* phead, LTDataType x)
{
	assert(phead);
	ListNode* tail = phead->prev;
	ListNode* NewNode = BuyListNode(x);
	NewNode->next = phead;
	NewNode->prev = tail;
	tail->next = NewNode; 
	phead->prev = NewNode; 
}

void ListPopBack(ListNode* phead)
{
	assert(phead);
	assert(phead != phead->next);
	phead->prev->prev->next = phead;
	ListNode* tmp = phead->prev;
	phead->prev = phead->prev->prev;
	free(tmp);
	tmp = NULL;
}

void ListPushFront(ListNode* phead, LTDataType x)
{
	ListNode* NewNode = BuyListNode(x);
	NewNode->next = phead->next;
	NewNode->prev = phead;
	phead->next->prev = NewNode;
	phead->next = NewNode;
}
void ListPopFront(ListNode* phead)
{
	assert(phead);
	assert(phead != phead->next);
	ListNode* tmp = phead->next;
	phead->next = phead->next->next;
	phead->next->prev = phead;
	free(tmp);
}

ListNode* ListFind(ListNode* phead, LTDataType x)
{
	ListNode* cur = phead->next;
	while (cur&&cur!=phead)
	{
		if (cur->data == x)
			return cur;
		cur = cur->next;
	}
	printf("Nor Found\n");
	return NULL;
}

void ListInsert(ListNode* pos, LTDataType x)
{
	ListNode* NewNode = BuyListNode(x);
	ListNode* posPrev = pos->prev;
	posPrev->next = NewNode;
	NewNode->prev = posPrev;
	NewNode->next = pos;
	pos->prev = NewNode;
}

void ListErease(ListNode* pos)
{
	assert(pos);
	ListNode* posPrev = pos->prev;
	posPrev->next = pos->next;
	pos->next->prev = posPrev;
	free(pos);
}

void ListDestory(ListNode* phead)
{
	assert(phead);
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		ListNode* next = cur->next;
		free(cur);
		cur = next;
	}
}


