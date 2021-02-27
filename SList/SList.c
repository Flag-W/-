#define _CRT_SECURE_NO_WARNINGS 1 
#include"SList.h"


void SListPrint(SListNode* phead)
{
	SListNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

SListNode*  BuySListNode(SListDataType x)
{
	SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));
	if (newNode == NULL)
	{
		printf("申请失败\n");
		exit(-1);
	}
	newNode->data = x;
	newNode->next = NULL;
	return newNode;
}

void SListPushBack(SListNode** pphead, SListDataType x)
{
	//找尾
	SListNode* tail = *pphead;
	if (tail != NULL)
	{
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = BuySListNode(x);
	}
	else
	{
		*pphead = BuySListNode(x);
	}
}
void SListPopBack(SListNode** pphead)
{
	if (*pphead == NULL)
	{
		printf("无数据可删\n");
		printf("NULL\n");
	}
	else if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
		printf("NULL\n");
	}
	else
	{
		SListNode* tail = *pphead;
		while ((tail->next)->next != NULL)
		{
			tail = tail->next;
		}
		free(tail->next);
		tail->next = NULL ;
	}
}

void SListPushFront(SListNode** pphead, SListDataType x)
{
	SListNode* tmp = *pphead;
	*pphead = BuySListNode(x);
	(*pphead)->next = tmp;
}

void SListPopFront(SListNode** pphead)
{
	if (*pphead == NULL)
	{
		printf("无数据可删\n");
		printf("NULL");
	}
	else if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
		printf("NULL");

	}
	else
	{
		SListNode* tmp = (*pphead)->next;
		free(*pphead);
		*pphead = tmp;
	}
}


SListNode* SListFind(SListNode* phead, SListDataType x)
{
	SListNode* cur = phead;
	while (cur != NULL)
	{
		if (cur->data == x)
			return cur;
		cur = cur->next;
	}
	if (cur == NULL)
		return NULL;
}


