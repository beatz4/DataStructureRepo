#include <stdio.h>
/*
int BSearch(int ar[], int len, int target)
{
	int first = 0;
	int last = len - 1;
	int mid;

	while (first <= last) {
		
		mid = (last + first) / 2;

		if (ar[mid] == target) {
			return mid;
		}
		else if(ar[mid] < target) {
			first = mid + 1;
		}
		else {
			last = mid - 1;
		}
	}

	return -1;
}

void printResult(int arr[], int size, int target)
{
	int idx = BSearch(arr, size, target);

	if (idx == -1)
		printf("Å½»ö ½ÇÆĞ \n");
	else
		printf("Å½»öµÈ ÀÎµ¦½º: %d\n", idx);
}

int main(void)
{
	int arr[] = { 1, 3, 5, 7, 9 };
	
	printResult(arr, sizeof(arr) / sizeof(int), 7);
	printResult(arr, sizeof(arr) / sizeof(int), 4);
	
	return 0;
}
*/