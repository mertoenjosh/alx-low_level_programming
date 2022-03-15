#include "main.h"
/**
 * print_last_digit - prints lat digit
 *
 * @n: passed to the function
 *
 * Return: last digit
 */

int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (i < 0)
	{
		_putchar(-i + 48);
		return (-i);
	}
	else
	{
		_putchar(i + 48);
		return (i);
	}
}
