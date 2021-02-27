#define _CRT_SECURE_NO_WARNINGS 1 
#include"SList.h"

void test()
{
	SListNode* cur = NULL;
	SListNode* pList = NULL;
	SListPushBack(&pList, 5);
	SListPushBack(&pList, 4);
	SListPushBack(&pList, 3);

	SListPrint(pList);
	SListPopBack(&pList);
	SListPrint(pList);
	SListPushFront(&pList, 1);
	SListPrint(pList);
	/*SListPopFront(&pList);
	SListPrint(pList);
	SListPopFront(&pList);
	SListPrint(pList);
	SListPopFront(&pList);
	SListPrint(pList);*/
	cur= SListFind(pList, 4);
	if (cur != NULL)
		cur->data = 7;
	else
		printf("Not found");
	SListPrint(pList);

}

int main()
{
	test();

	return 0;
}
