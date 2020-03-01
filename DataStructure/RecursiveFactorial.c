#include <stdio.h>

int Factorial(int num)
{
	if (num == 0)
		return 1;
	else
		return num * Factorial(num - 1);
}

#if 0
int main(void)
{
	printf("%d의 Factorial: %d \n", 1, Factorial(1));
	printf("%d의 Factorial: %d \n", 2, Factorial(2));
	printf("%d의 Factorial: %d \n", 3, Factorial(3));
	printf("%d의 Factorial: %d \n", 4, Factorial(4));
	printf("%d의 Factorial: %d \n", 9, Factorial(9));

	return 0;
}
#endif