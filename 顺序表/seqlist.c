#define _CRT_SECURE_NO_WARNINGS 1 
#include"seqlist.h"

void SeqListInit(SL* ps)
{
	//s.size = 0;
	//s.capacity = 0;
	//s.a = NULL;
	ps->a = (SLDATATYPE*)malloc(sizeof(SLDATATYPE) * 4);
	if (ps->a == NULL)
	{
		printf("�����ڴ�ʧ��\n");
		exit(-1);
	}
	ps->size = 0; 
	ps->capacity = 4;
}

void SeqListPrint(SL* ps)
{
	assert(ps);
	int i = 0;
	for (i = 0; i < ps->size; i++)
		printf("%d ", ps->a[i]);
	printf("\n");
}

void SeqListCheckCapacity(SL* ps)
{
	assert(ps);
	if (ps->size == ps->capacity)
	{
		ps->capacity *= 2;
		ps->a = (SLDATATYPE*)realloc(ps->a, sizeof(SLDATATYPE) * ps->capacity);
		if (ps->a == NULL)
		{
			printf("����ʧ��\n");
			exit(-1);
		}
	}
}

//β��βɾ  ͷ��ͷɾ
void SeqListPushBack(SL* ps, SLDATATYPE x)
{
	assert(ps);
	SeqListCheckCapacity(ps);
	ps->a[ps->size] = x;
	ps->size++;
}
void SeqListPophBack(SL* ps)
{
	assert(ps);
	ps->size--;
}
void SeqListPushFront(SL* ps, SLDATATYPE x)
{
	assert(ps);
	int end = ps->size - 1;
	SeqListCheckCapacity(ps);
	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[0] = x;
	ps->size++;
}
void SeqListPopFront(SL* ps)
{
	assert(ps);
	int begin = 1;
	while (begin <= ps->size)
	{
		ps->a[begin - 1] = ps->a[begin];
		begin++;
	}
	ps->size--;
}


//����λ�ò���ɾ��
void SeqListInsert(SL* ps, int pos, SLDATATYPE x)
{
	assert(ps);
	SeqListCheckCapacity(ps);
	int end = ps->size - 1;
	while (end >= pos - 1)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[++end] = x;
	ps->size++;
}
void SeqListErase(SL* ps, int pos)
{
	assert(ps);
	int begin = pos;
	while (begin <= ps->size)
	{
		ps->a[begin - 1] = ps->a[begin];
		begin++;
	}
	ps->size--;
}

