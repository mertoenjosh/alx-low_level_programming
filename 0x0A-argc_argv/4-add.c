#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _isDigit - checks if a char is a digit
 *
 * @a: character passed
 *
 * Return: a digit
 */


int _isDigit(char *a)
{
	int i, num, len;

	i = 0;
	num = 0;
	len = strlen(a);
	while (i < len)
	{
		if (a[i] < '0' || a[i] > '9')
		{
			return (-1);
		}
		else
			num = num * 10 + (a[i] - '0');
		i++;
	}
	return (num);
}

/**
 * main - prints sum of two nums
 *
 * @argc: number of cmd arg
 * @argv: array of cmd args
 *
 * Return: 0 or 1
 */


int main(int argc, char **argv)
{
	int i, num, sum;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		num = _isDigit(argv[i]);
		if (num == -1)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d", sum);
	return (0);
}
