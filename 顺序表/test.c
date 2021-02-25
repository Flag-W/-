#define _CRT_SECURE_NO_WARNINGS 1 
#include"seqlist.h"

//˛âĘÔÍˇÎ˛˛ĺČëÉžłý
void TestSeqList1()
{
	SeqList s;
	SeqListInit(&s);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPrint(&s);
	SeqListPophBack(&s);
	SeqListPophBack(&s);
	SeqListPrint(&s);
	SeqListPushFront(&s, 7);
	SeqListPrint(&s);
	SeqListPopFront(&s);
	SeqListPrint(&s);
	SeqListInsert(&s, 2, 8);
	SeqListPrint(&s);
	SeqListErase(&s,2);
	SeqListPrint(&s);
	SeqListDestory(&s);
}

int main()
{

	TestSeqList1();

	return 0;
}
