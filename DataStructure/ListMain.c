#include <stdio.h>
#include "ArrayList.h"

int main(void)
{
	// ArrayList의 생성 및 초기화 //
	List list;
	LData ldata;
	
	ListInit(&list);

#if 0
	// 5개의 데이터 저장 //
	LInsert(&list, 11); LInsert(&list, 11);
	LInsert(&list, 22); LInsert(&list, 22);
	LInsert(&list, 33);

	// 저장된 데이터의 전체 출력 //
	printf("현제 데이터 수: %d \n", LCount(&list));

	if (LFirst(&list, &ldata))
	{
		printf("%d \n", ldata.data);
		while (LNext(&list, &ldata)) {
			printf("%d \n", ldata.data);
		}
	}

	printf("\n\n");
	
	// 숫자 22을 탐색하여 모두 삭제 //
	if (LFirst(&list, &ldata))
	{
		if (ldata.data == 22)
			LRemove(&list);

		while (LNext(&list, &ldata)) {
			if (ldata.data == 22)
				LRemove(&list);
		}
	}

	// 삭제 후 남은 데이터 전체 출력 //
	printf("현제 데이터 수: %d \n", LCount(&list));

	if (LFirst(&list, &ldata))
	{
		printf("%d \n", ldata.data);
		while (LNext(&list, &ldata)) {
			printf("%d \n", ldata.data);
		}
	}
	
	printf("\n\n");

#endif

	// 1 ~ 9 저장
	for (int i = 1; i <= 9; i++)
	{
		LInsert(&list, i);
	}
	
	// 순차적 참조로 합을 구한후 출력
	int sum = 0;
	if (LFirst(&list, &ldata)) {
		sum += ldata.data;

		while (LNext(&list, &ldata)) {
			sum += ldata.data;
		}
	}

	printf("합: %d \n", sum);

	// 2의 배수와 3의 배수 삭제
	if (LFirst(&list, &ldata)) {
		
		if (ldata.data % 2 == 0 || ldata.data % 3 == 0)
			LRemove(&list);

		while (LNext(&list, &ldata)) {
			if (ldata.data % 2 == 0 || ldata.data % 3 == 0)
				LRemove(&list);
		}
	}

	// 리스트 출력
	printf("현재 저장된 데이터 개수: %d \n", LCount(&list));

	if (LFirst(&list, &ldata)) {

		printf("%d \n", ldata.data);

		while (LNext(&list, &ldata)) {
			printf("%d \n", ldata.data);
		}
	}

	printf("\n\n");

	return 0;
}