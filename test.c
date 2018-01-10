#include <stdio.h>

int main()
{
	printf("Hello, github!\n");

	printf("The Max value is: %d\n", max(4, 10));
	min(3, 4);

	return 0;
}

int max(int a, int b)
{
	return a > b ? a : b;
}

int min(int a, int b)
{
	return a < b ? a : b;
}
