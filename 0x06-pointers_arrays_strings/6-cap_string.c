#include "main.h"

/**
 * cap_string - capitalize strings
 *
 * @ch: String co capitalize
 *
 * Return: Capitalized string
 */

char *cap_string(char *ch)
{
	int i = 0;

	while (ch[i])
	{
		if (i == 0 && (ch[i] >= 97 && ch[i] <= 122))
		{
			ch[i] = ch[i] - ' ';
			i++;
		}

		if (ch[i] == 32 || ch[i] == '9' || ch[i] == 11 ||
				ch[i] == '\n' || ch[i] == '.' || ch[i] == ',' ||
				ch[i] == ';' || ch[i] == '!' || ch[i] == '?' ||
				ch[i] == '"' || ch[i] == '(' || ch[i] == ')' ||
				ch[i] == '{' || ch[i] == '}')
		{
			i++;
			if (ch[i] >= 97 && ch[i] <= 122)
			{
				ch[i] = ch[i] - 32;
			}
		}
		else
			i++;
	}
	return (ch);
}
