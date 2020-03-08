#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "CLinkedList.h"

#if 0
void ListInit(List* plist)
{
	plist->before = NULL;
	plist->cur = NULL;
	plist->tail = NULL;
	plist->numOfData = 0;
}

void LInsert(List* plist, Data data)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;
	
	if (plist->tail == NULL)
	{
		plist->tail = newNode;
		newNode->next = newNode;
	}
	else
	{
		newNode->next = plist->tail->next;
		plist->tail->next = newNode;
		plist->tail = newNode;
	}

	(plist->numOfData)++;
}

void LInsertFront(List* plist, Data data)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;

	if (plist->tail == NULL)
	{
		plist->tail = newNode;
		newNode->next = newNode;
	}
	else
	{
		newNode->next = plist->tail->next;
		plist->tail->next = newNode;
	}

	(plist->numOfData)++;
}

int LFirst(List* plist, Data* pdata)
{
	if (plist->tail == NULL)
		return FALSE;

	plist->before = plist->tail;
	plist->cur = plist->before->next;

	*pdata = plist->cur->data;

	return TRUE;
}

int LNext(List* plist, Data* pdata)
{
	if (plist->tail == NULL)
		return FALSE;

	plist->before = plist->cur;
	plist->cur = plist->cur->next;

	*pdata = plist->cur->data;
	return TRUE;
}

Data LRemove(List* plist)
{
	Node* rpos = plist->cur;
	Data data = rpos->data;
	
	if (rpos == plist->tail)
	{
		if (plist->tail->next == plist->tail)
		{
			plist->tail = NULL;
		}
		else
		{
			plist->tail = plist->before;
		}
	}
	plist->before->next = rpos->next;
	plist->cur = plist->before;

	free(rpos);
	(plist->numOfData)--;
	return data;
}

int LCount(List* plist)
{
	return plist->numOfData;
}

Data WhoNightDuty(List* plist, char* name, int day)
{
	int i, num;
	EmployeeInfo* ret;

	num = LCount(plist);

	LFirst(plist, &ret);

	if (strcmp(ret->name, name) != 0) {
		for (i = 0; i < num - 1; i++)
		{
			LNext(plist, &ret);
			if (strcmp(ret->name, name) == 0)
				break;
		}

		if (i > num - 1)
			return NULL;
	}

	for (i = 0; i < day; i++)
	{
		LNext(plist, &ret);
	}

	return ret;
}

Data FindNext(List* plist, char* name, int nextStep)
{
	Data data;

	int status = 0;

	if (LFirst(plist, &data))
	{
		if (strcmp(data->name, name))
		{
			while (nextStep != 0)
			{
				LNext(plist, &data);
				nextStep--;
			}
		}
		else {
			while (nextStep != 0 && LNext(plist, &data))
			{
				if (strcmp(data->name, name))
				{
					status = 1;
				}

				if (status == 1)
					nextStep--;
			}
		}
	}

	return data;
}
#endif