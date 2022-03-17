#include "main.h"

/**
 * more_numbers - prints 0 through 10
 *
 *
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i <= 14; i++)
	{
		if (i < 10)
		{
			_putchar(i + 48);
		}
		else
		{
			_putchar(((i / 10) + 48) (i % 10) + 48);
		}
		_putchar('\n');
	}
}
