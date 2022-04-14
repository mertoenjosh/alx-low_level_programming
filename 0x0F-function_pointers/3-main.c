#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - main function of the program
 *
 * @argc: number of arguments
 * @argv: array of the passed arguments
 *
 * Return: int of the exit status
 */

int main(int argc, char **argv)
{
	int (*fun)(int, int);
	int res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*' &&
				argv[2][0] != '/'  && argv[2][0] != '%') ||
			argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') &&
			(argv[1] == 0 || argv[3] == 0))
	{
		printf("Error\n");
		exit(100);
	}
	fun = get_op_func(argv[2]);
	res = fun(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", res);
	return (0);
}
