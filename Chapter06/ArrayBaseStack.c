#include <stdio.h>
#include "ArrayBaseStack.h"

#if 0
void StackInit(Stack* pstack)
{
	pstack->topIndex = -1;
}

int SIsEmpty(Stack* pstack)
{
	return (pstack->topIndex == -1) ? TRUE : FALSE;
}

void SPush(Stack* pstack, Data data)
{
	if (STACK_LEN <= (pstack->topIndex - 1))
		return;

	pstack->topIndex++;
	pstack->stackArr[pstack->topIndex] = data;
}

Data SPop(Stack* pstack)
{
	if (pstack->topIndex < 0)
		return -1;

	Data rdata = pstack->stackArr[pstack->topIndex];
	pstack->topIndex--;

	return rdata;
}

Data SPeek(Stack* pstack)
{
	if (SIsEmpty(pstack))
		return -1;

	return pstack->stackArr[pstack->topIndex];
}
#endif