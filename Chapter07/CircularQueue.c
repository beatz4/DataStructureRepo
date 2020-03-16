#include <stdio.h>
#include <stdlib.h>
#include "CircularQueue.h"

#if 0
void QueueInit(Queue* pq)
{
	pq->front = 0;
	pq->rear = 0;
}

int QIsEmpty(Queue* pq)
{
	if (pq->front == pq->rear)
		return TRUE;
	else
		return FALSE;
}

int NextPosIdx(int pos)
{
	if (pos == QUE_LEN - 1)
		return 0;
	else
		return pos + 1;
}

void Enqueue(Queue* pq, Data data)
{
	int nextPos = NextPosIdx(pq->rear);

	if (nextPos == pq->front) {
		printf(">>>>>>>>>>>>>>>>>>>> full!! \n");
		return;
	}
		
	pq->queArr[nextPos] = data;
	pq->rear = nextPos;
}

Data Dequeue(Queue* pq)
{
	if (QIsEmpty(pq))
	{
		printf(">>>>>>>>>>>>>>>>>>>> empty!! \n");
		return -1;
	}

	pq->front = NextPosIdx(pq->front);
	return pq->queArr[pq->front];
}

Data QPeek(Queue* pq)
{
	if (QIsEmpty(pq))
	{
		printf(">>>>>>>>>>>>>>>>>>>> empty!! \n");
		return -1;
	}

	return pq->queArr[pq->front];
}
#endif