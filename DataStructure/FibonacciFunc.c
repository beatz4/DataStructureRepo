#include <stdio.h>

int Fibonacci(int num)
{
	printf("func call param: %d \n", num);

	if (num == 1)
		return 0;
	else if (num == 2)
		return 1;
	else
		return Fibonacci(num - 1) + Fibonacci(num - 2);
}

#if 0
int main(void)
{
	printf("%d Fibonaci: %d \n", 7, Fibonacci(7));

	return 0;
}
#endif