#incude "main.h"

/**
 * print_most_numbers - prints numbers skipping 2 and 4
 *
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i == 2 || i ==  4)
		{
			continue;
			_putchar(i + 48);
		}
		i += 1;
	}
	_putchar('\n');
}
