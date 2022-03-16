#include <stdio.h>

/**
 * main - print fibonacci up to 50
 *
 * Return: 0
 */

int main(void)
{
	int i;
	unsigned long int fib;
	unsigned long int n1 = 0;
	unsigned long int n2 = 1;

	for (i = 2; i <= 52; i++)
	{
		if (i == 52) {
			printf("%ld", fib);
			break;
		} else {
			fib = n1 + n2;
			printf("%ld, ", fib);
			n1 = n2;
			n2 = fib;
		}
	}
	printf("\n");
	return (0);
}

