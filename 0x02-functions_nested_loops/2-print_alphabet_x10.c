/**
 * print_alphabet_x10 - prints lowercase alphabet 10 times
 *
 */

void print_alphabet_x10(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (i = 1; i <= 26; i++)
		{
			_putchar(alph[i]);
		}
		_putchar('\n');
	}
}
