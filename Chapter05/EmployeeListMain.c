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

	// ���� ����
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

	// ���
	int count = LCount(&list);
	printf("���� ��� ���� ��� : %d \n", count);

	if (LFirst(&list, &data)) {
		ShowEmployeeInfo(data);

		for (int i = 0; i < count * 3 - 1; i++) {
			LNext(&list, &data);
			ShowEmployeeInfo(data);
		}
	}

	printf("\n\n");

	// ã��
	data = FindNext(&list, "fucking", 8);
	ShowEmployeeInfo(data);

	return 0;
}
#endif