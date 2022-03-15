#include "main.h"

/**
 * times_table - prints the times table of 9
 */

void times_table(void)
{
	int i, j, tot;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			tot = i * j;
			if (tot <= 9)
			{
				_putchar(32);
				_putchar(tot + 48);
			}
			else
			{
				_putchar((tot / 10) + 48);
				_putchar((tot  % 10) + 48);
				_putchar(44);
				_putchar(32);
			}
		}
		_putchar('\n');
	}
}

