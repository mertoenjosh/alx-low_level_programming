#include <stdio.h>

/**
 * main - print fibonacci up to 50
 *
 * Return: 0
 */

int main(void)
{
	int i;
	long int fib;
	long int n1 = 0;
	long int n2 = 1;

	for (i = 2; i <= 50; i++)
	{
		fib = n1 + n2;
		printf("%ld, ", fib);
		n1 = n2;
		n2 = fib;
	}
	printf("\n");
	return (0);
}

