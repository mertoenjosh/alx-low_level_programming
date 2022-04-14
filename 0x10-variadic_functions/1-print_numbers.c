#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers
 *
 * @separator: string to be printed between numbers
 * @n: num of ints passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int j = 0;
	va_list args;

	va_start(args, n);
	for (i; i < n; i++)
	{
		j = va_arg(args, int);
		if (i < (n - 1) && separator != 0)
			printf("%d%s", j, separator);
		else
			printf("%d", j);
	}
	va_end(args);
	printf("\n");
}
