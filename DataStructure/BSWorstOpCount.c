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

	printf("비교연산횟수: %d\n", opCount);
	return -1;
}
#if 0
int main(void)
{
	int arr1[500] = { 0, };
	int arr2[5000] = { 0, };
	int arr3[50000] = { 0, };
	int idx;

	// 배열 arr1을 대상으로, 저장되지 않은 정수 1을 찾으라고 명령
	idx = BSearch(arr1, sizeof(arr1)/sizeof(int), 1);
	if (idx == -1)
		printf("탐색 실패\n");
	else
		printf("탐색 저장 인덱스: %d\n", idx);

	// 배열 arr2을 대상으로, 저장되지 않은 정수 2을 찾으라고 명령
	idx = BSearch(arr2, sizeof(arr2) / sizeof(int), 2);
	if (idx == -1)
		printf("탐색 실패\n");
	else
		printf("탐색 저장 인덱스: %d\n", idx);

	// 배열 arr3을 대상으로, 저장되지 않은 정수 3을 찾으라고 명령
	idx = BSearch(arr3, sizeof(arr3) / sizeof(int), 3);
	if (idx == -1)
		printf("탐색 실패\n");
	else
		printf("탐색 저장 인덱스: %d\n", idx);

	return 0;
}
#endif