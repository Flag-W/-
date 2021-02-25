#define _CRT_SECURE_NO_WARNINGS 1 
# pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//˳�����Ч�����������б�����������
//��̬˳�����ƣ���С�ɱ䣩
typedef  int SLDATATYPE;

typedef struct SeqList
{
	SLDATATYPE* a;
	int size;
	int capacity;
}SL, SeqList;

void SeqListInit(SL* ps);

void SeqListPrint(SL* ps);
void SeqListCheckCapacity(SL* ps);

//β��βɾ  ͷ��ͷɾ
void SeqListPushBack(SL* ps, SLDATATYPE x);
void SeqListPophBack(SL* ps);
void SeqListPushFront(SL* ps, SLDATATYPE x);
void SeqListPopFront(SL* ps);


//����λ�ò���ɾ��
void SeqListInsert(SL* ps, int pos, SLDATATYPE x);
void SeqListErase(SL* ps, int pos);

