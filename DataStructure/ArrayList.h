#pragma once
#include <stdio.h>

typedef struct _data {
	int data;
}LData;

typedef struct _list {
	int currentPos;
	int count;
	LData data[255];
}List;

void ListInit(List* pList) {
	pList->currentPos = -1;
	pList->count = 0;
}

void LInsert(List* pList, int data)
{
	if (pList->count >= 255)
		return;

	pList->data[pList->count].data = data;
	pList->count++;
}

int LFirst(List* pList, LData* pdata)
{
	if (pList->count < 1)
		return 0;

	pList->currentPos = 0;
	*pdata = pList->data[pList->currentPos];
	return 1;
}

int LNext(List* pList, LData *pData) 
{
	int ret = 0;
	if (pList->currentPos < (pList->count - 1))
	{
		pList->currentPos++;
		*pData = (pList->data[pList->currentPos]);
		ret = 1;
	}
		
	return ret;
}

LData LRemove(List* pList)
{
	LData data = pList->data[pList->currentPos];
	
#if 1
	for (int i = pList->currentPos + 1; i < pList->count; ++i) {
		pList->data[i - 1] = pList->data[i];
	}

	pList->count--;
	pList->currentPos--;
#endif
	
	return data;
}

int LCount(List* pList)
{
	return pList->count;
}