#include <stdio.h>
//修改bug,使用这个分支branch

int main()
{
	printf("Hello, github!\n");

	printf("The Max value is: %d\n", max(4, 10));

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
