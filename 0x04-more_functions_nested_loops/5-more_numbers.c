#include "main.h"

/**
 * more_numbers - prints 0 through 10
 *
 *
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + 48);
			}
			_putchar((i % 10) + 48);
		}
		_putchar('\n');
	}
}
