#include <stdio.h>

/**
 * main - print fib even < 4,000,000
 *
 * Return: 0
 */

int main(void)
{
	int i;
	unsigned long int limit = 4000000;
	unsigned long int n1 = 0;
	unsigned long int n2 = 1;
	unsigned long int fib;
	unsigned long int sum;

	for (i = 2; i < 100; i++)
	{
		fib = n1 + n2;
		if (fib < limit)
		{
			if (fib % 2 == 0)
			{
				sum += fib;
			}
		}
		else
		{
			break;
		}
		n1 = n2;
		n2 = fib;
	}
	printf("%ld\n", sum);
	return (0);
}

