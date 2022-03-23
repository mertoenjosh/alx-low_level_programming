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
			ch[i] = ch[i] - 32;
			
		}
		else if (ch[i-1] == 32 || ch[i-1] == 9 || ch[i-1] == 11 ||
				ch[i-1] == '\n' || ch[i-1] == '.' || ch[i-1] == ',' ||
				ch[i-1] == ';' || ch[i-1] == '!' || ch[i-1] == '?' ||
				ch[i-1] == '"' || ch[i-1] == '(' || ch[i-1] == ')' ||
				ch[i-1] == '{' || ch[i-1] == '}')
		{
			if (ch[i] >= 97 && ch[i] <= 122)
			{
				ch[i] = ch[i] - 32;
			}
		}

		i++;

	}
	return (ch);
}
