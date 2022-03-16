#include <stdio.h>

/**
 * main - print fibonacci up to 50
 *
 * Return: 0
 */

int main(void)
{
	int i, fib;
	int n1 = 0;
	int n2 = 1;

	for (i = 2; i <= 50; i++)
	{
		fib = n1 + n2;
		printf("%d, ", fib);
		n1 = n2;
		n2 = fib;
	}
	return (0);
}

