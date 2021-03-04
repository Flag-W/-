#define _CRT_SECURE_NO_WARNINGS 1
#include"stack.h"


void StackInit(Stack* ps)
{
	ps->a = NULL;
	ps->capacity = 0;
	ps->top = 0;
}

void StackPush(Stack* ps, STDataType x)
{
	assert(ps);
	if (ps->top == ps->capacity)
	{
		size_t newcapacity = ps->capacity == 0 ? 4 : (ps->capacity) * 2;
		ps->a = (STDataType*)realloc(ps->a, sizeof(STDataType) * newcapacity);
		ps->capacity = newcapacity;
	}
	ps->a[ps->top] = x;
	ps->top++;
}
void StackPop(Stack* ps)
{
	assert(ps&&ps->top!=0);
	ps->top--;
}

STDataType StackTop(Stack* ps)
{
	assert(ps&&ps->top!=0);
	return ps->a[ps->top-1];
}

int StackSize(Stack* ps)
{
	assert(ps);
	return ps->top;
}

int StackEmpty(Stack* ps)
{
	assert(ps);
	return ps->top == 0 ? 1 : 0;
}

void StackDestory(Stack* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->top = 0;
}

void StackPrint(Stack* ps)
{
	assert(ps);
	int i = 0;
	while (i < ps->top)
	{
		printf("%d ", ps->a[i]);
		i++;
	}
	printf("\n");
}

