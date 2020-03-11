#include <stdio.h>
#include <stdlib.h>
#include "ListBaseStack.h"

#if 0
void StackInit(Stack* pstack)
{
	pstack->head = NULL;
}

int SIsEmpty(Stack* pstack)
{
	return (pstack->head == NULL) ? TRUE : FALSE;
}

void SPush(Stack* pstack, Data data)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;
	newNode->next = pstack->head;
	
	pstack->head = newNode;
}

Data SPop(Stack* pstack)
{
	if (SIsEmpty(pstack))
		return -1;

	Node* rpos = pstack->head;
	Data rdata = rpos->data;

	pstack->head = rpos->next;
	free(rpos);

	return rdata;
}

Data SPeek(Stack* pstack)
{
	if (SIsEmpty(pstack))
		return -1;

	return pstack->head->data;
}
#endif