#include <stdio.h>
#include <stdlib.h>
#include "CLinkedList.h"
#include "StackFromCLinkedList.h"

void StackInit(CStack* pstack)
{
	ListInit(pstack);
}

int SIsEmpty(CStack* pstack)
{
	return (pstack->numOfData == 0) ? 1 : 0;
}

void SPush(CStack* pstack, Data data)
{
	LInsertFront(pstack, data);
}

Data SPop(CStack* pstack)
{
	if (SIsEmpty(pstack))
		return -1;

	Data data;
	LFirst(pstack, &data);
	LRemove(pstack);

	return data;
}

Data SPeek(CStack* pstack)
{
	if (SIsEmpty(pstack))
		return -1;

	Data data;
	LFirst(pstack, &data);
	return data;
}