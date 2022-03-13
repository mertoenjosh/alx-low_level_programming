#include <stdio.h>
/**
 * main - print to stderr
 *
 * Return: 1
 */
int main(void)
{
	char err[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fprintf(stderr, "%s\n", err);
	return (1);
}
