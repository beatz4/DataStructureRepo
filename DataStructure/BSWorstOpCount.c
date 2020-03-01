#include <stdio.h>

int BSearch(int ar[], int len, int target)
{
	int first = 0;
	int last = len - 1;
	int mid;
	int opCount = 0;

	while (first <= last) {

		mid = (last + first) / 2;

		if (ar[mid] == target) {
			return mid;
		}
		else if (ar[mid] < target) {
			first = mid + 1;
		}
		else {
			last = mid - 1;
		}

		opCount++;
	}

	printf("�񱳿���Ƚ��: %d\n", opCount);
	return -1;
}
#if 0
int main(void)
{
	int arr1[500] = { 0, };
	int arr2[5000] = { 0, };
	int arr3[50000] = { 0, };
	int idx;

	// �迭 arr1�� �������, ������� ���� ���� 1�� ã����� ���
	idx = BSearch(arr1, sizeof(arr1)/sizeof(int), 1);
	if (idx == -1)
		printf("Ž�� ����\n");
	else
		printf("Ž�� ���� �ε���: %d\n", idx);

	// �迭 arr2�� �������, ������� ���� ���� 2�� ã����� ���
	idx = BSearch(arr2, sizeof(arr2) / sizeof(int), 2);
	if (idx == -1)
		printf("Ž�� ����\n");
	else
		printf("Ž�� ���� �ε���: %d\n", idx);

	// �迭 arr3�� �������, ������� ���� ���� 3�� ã����� ���
	idx = BSearch(arr3, sizeof(arr3) / sizeof(int), 3);
	if (idx == -1)
		printf("Ž�� ����\n");
	else
		printf("Ž�� ���� �ε���: %d\n", idx);

	return 0;
}
#endif