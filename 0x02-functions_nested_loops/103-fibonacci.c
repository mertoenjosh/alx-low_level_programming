#include <stdio.h>

/**
 * main - print fib even < 4,000,000
 *
 * Return: 0
 */

int main(void)
{
	int i;
	long int limit = 4000000;
	long int n1 = 0;
	long int n2 = 1;
	long int fib;
	long int sum;

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

