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
			_putchar(tot);
		}
		_putchar('\n');
	}
}

