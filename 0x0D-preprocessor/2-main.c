#include <stdio.h>
/**
 * main - prints name of the file
 *
 * @argc: number of args
 * @argv: array of the args
 *
 * Return: 0
 */

int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
