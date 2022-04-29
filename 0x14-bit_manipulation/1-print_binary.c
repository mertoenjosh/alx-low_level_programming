#include "main.h"
#include "_pow_rec.c"

/**
 * print_binary - converts number to binary
 *
 * @n: decimal number
 */

void print_binary(unsigned long int n)
{
	unsigned int res_pow = 0;
	int exp = 10;
	int flag = 0;

	if (n == 0)
		_putchar('0');
	while (exp >= 0)
	{
		res_pow = _pow_rec(2, exp);
		if (n >= res_pow)
		{
			_putchar('1');
			n -= res_pow;
			flag = 1;
		}
		else if (n < res_pow && flag == 1)
			_putchar('0');
		exp--;
	}
}
