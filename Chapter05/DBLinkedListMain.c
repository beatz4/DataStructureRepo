#include <stdio.h>
#include "DBLinkedList.h"

#if 0
int main(void)
{
	List list;
	int data;
	ListInit(&list);

	// 데이터 추가
	LInsert(&list, 1); LInsert(&list, 2);
	LInsert(&list, 3); LInsert(&list, 4);
	LInsert(&list, 5); LInsert(&list, 6);
	LInsert(&list, 7); LInsert(&list, 8);

	// 저장된 데이터 조회
	if (LFirst(&list, &data)) {
		printf("%d ", data);

		// 오른쪽 이동
		while (LNext(&list, &data))
			printf("%d ", data);

		// 왼쪽 이동
		while (LPrevious(&list, &data))
			printf("%d ", data);
	}

	printf("\n\n");

	return 0;
}
#endif