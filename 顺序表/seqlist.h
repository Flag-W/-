#define _CRT_SECURE_NO_WARNINGS 1 
# pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//顺序表，有效数据在数组中必须是连续的
//动态顺序表设计（大小可变）
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

//尾插尾删  头插头删
void SeqListPushBack(SL* ps, SLDATATYPE x);
void SeqListPophBack(SL* ps);
void SeqListPushFront(SL* ps, SLDATATYPE x);
void SeqListPopFront(SL* ps);


//任意位置插入删除
void SeqListInsert(SL* ps, int pos, SLDATATYPE x);
void SeqListErase(SL* ps, int pos);

