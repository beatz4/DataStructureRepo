#include <stdio.h>
#include <stdlib.h>
#include "CLinkedList.h"
#include "EmployeeList.h"

#if 0
int main(void)
{
	List list;
	EmployeeInfo* data;
	
	ListInit(&list);

	// 직원 삽입
	data = (EmployeeInfo*)malloc(sizeof(EmployeeInfo));
	SetEmployeeInfo(data, 1, "fucking");
	LInsert(&list, data);

	data = (EmployeeInfo*)malloc(sizeof(EmployeeInfo));
	SetEmployeeInfo(data, 2, "pussy");
	LInsert(&list, data);

	data = (EmployeeInfo*)malloc(sizeof(EmployeeInfo));
	SetEmployeeInfo(data, 3, "asshole");
	LInsert(&list, data);

	data = (EmployeeInfo*)malloc(sizeof(EmployeeInfo));
	SetEmployeeInfo(data, 4, "sonOfBitch");
	LInsert(&list, data);

	// 출력
	int count = LCount(&list);
	printf("현재 사원 정보 출력 : %d \n", count);

	if (LFirst(&list, &data)) {
		ShowEmployeeInfo(data);

		for (int i = 0; i < count * 3 - 1; i++) {
			LNext(&list, &data);
			ShowEmployeeInfo(data);
		}
	}

	printf("\n\n");

	// 찾기
	data = FindNext(&list, "fucking", 8);
	ShowEmployeeInfo(data);

	return 0;
}
#endif