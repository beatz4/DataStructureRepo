#include <stdio.h>

int BSearchRecur(int arr[], int first, int last, int target)
{
	if (last < first)
		return -1;

	int mid = (last + first) / 2;
	if (target == arr[mid])
		return mid;

	else if (target < arr[mid])
		return BSearchRecur(arr, first, mid - 1, target);
	else
		return BSearchRecur(arr, mid + 1, last, target);
}

#if 0
int main(void)
{
	int arr[] = { 1, 3, 5, 7, 9 };
	int idx;

	idx = BSearchRecur(arr, 0, sizeof(arr) / sizeof(int) - 1, 7);
	if (idx == -1)
		printf("탐색 실패 \n");
	else
		printf("타켓 저장 인덱스: %d \n", idx);

	idx = BSearchRecur(arr, 0, sizeof(arr) / sizeof(int) - 1, 4);
	if (idx == -1)
		printf("탐색 실패 \n");
	else
		printf("타켓 저장 인덱스: %d \n", idx);

	return 0;
}
#endif