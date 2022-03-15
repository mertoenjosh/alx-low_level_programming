#include "main.h"

/**
 * times_table - prints the times table of 9
 */

void times_table(void)
{
	int i, j, tot;

	for (i = 1; i <= 9; i++)
	{
		_putchar(48);
		for (j = 0; j <= 9; j++)
		{
			tot = i * j;
			_putchar(44);
			_putchar(32);
			if (tot <= 9)
			{
				_putchar(32);
				_putchar(tot + 48);
			}
			else
			{
				_putchar((tot / 10) + 48);
				_putchar((tot  % 10) + 48);
			}
		}
		_putchar('\n');
	}
}

