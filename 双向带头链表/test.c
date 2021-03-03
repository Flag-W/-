#define _CRT_SECURE_NO_WARNINGS 1 
#include"list.h"


void test()
{
	ListNode* phead = NULL;
	ListInit(&phead);
	ListPushBack(phead, 1);
	ListPushBack(phead, 2);
	ListPushBack(phead, 3);
	ListPushBack(phead, 4);
	ListPrint(phead);

	//ListPopBack(phead);
	//ListPopBack(phead);
	//ListPrint(phead);

	ListPushFront(phead, 9);
	ListPushFront(phead, 8);
	ListPrint(phead);

	//ListPopFront(phead);
	//ListPopFront(phead);
	//ListPrint(phead);
	ListNode*tmp= ListFind(phead, 1);
	ListPrint(tmp);



}

void test1()
{
	ListNode* phead = NULL;
	ListInit(&phead);
	ListPushBack(phead, 1);
	ListPushBack(phead, 2);
	ListPushBack(phead, 3);
	ListPushBack(phead, 4);
	ListPrint(phead);
	ListNode* pos = ListFind(phead, 3);
	ListInsert(pos, 30);
	ListPrint(phead);
	pos = ListFind(phead, 2);
	ListErease(pos);
	ListPrint(phead);


}

int main()
{
	//test();
	test1();
	return 0;
}