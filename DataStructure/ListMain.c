#include <stdio.h>
#include "ArrayList.h"

int main(void)
{
	// ArrayList�� ���� �� �ʱ�ȭ //
	List list;
	LData ldata;
	
	ListInit(&list);

#if 0
	// 5���� ������ ���� //
	LInsert(&list, 11); LInsert(&list, 11);
	LInsert(&list, 22); LInsert(&list, 22);
	LInsert(&list, 33);

	// ����� �������� ��ü ��� //
	printf("���� ������ ��: %d \n", LCount(&list));

	if (LFirst(&list, &ldata))
	{
		printf("%d \n", ldata.data);
		while (LNext(&list, &ldata)) {
			printf("%d \n", ldata.data);
		}
	}

	printf("\n\n");
	
	// ���� 22�� Ž���Ͽ� ��� ���� //
	if (LFirst(&list, &ldata))
	{
		if (ldata.data == 22)
			LRemove(&list);

		while (LNext(&list, &ldata)) {
			if (ldata.data == 22)
				LRemove(&list);
		}
	}

	// ���� �� ���� ������ ��ü ��� //
	printf("���� ������ ��: %d \n", LCount(&list));

	if (LFirst(&list, &ldata))
	{
		printf("%d \n", ldata.data);
		while (LNext(&list, &ldata)) {
			printf("%d \n", ldata.data);
		}
	}
	
	printf("\n\n");

#endif

	// 1 ~ 9 ����
	for (int i = 1; i <= 9; i++)
	{
		LInsert(&list, i);
	}
	
	// ������ ������ ���� ������ ���
	int sum = 0;
	if (LFirst(&list, &ldata)) {
		sum += ldata.data;

		while (LNext(&list, &ldata)) {
			sum += ldata.data;
		}
	}

	printf("��: %d \n", sum);

	// 2�� ����� 3�� ��� ����
	if (LFirst(&list, &ldata)) {
		
		if (ldata.data % 2 == 0 || ldata.data % 3 == 0)
			LRemove(&list);

		while (LNext(&list, &ldata)) {
			if (ldata.data % 2 == 0 || ldata.data % 3 == 0)
				LRemove(&list);
		}
	}

	// ����Ʈ ���
	printf("���� ����� ������ ����: %d \n", LCount(&list));

	if (LFirst(&list, &ldata)) {

		printf("%d \n", ldata.data);

		while (LNext(&list, &ldata)) {
			printf("%d \n", ldata.data);
		}
	}

	printf("\n\n");

	return 0;
}