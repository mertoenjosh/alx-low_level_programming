#include "main.h"

/**
 * main - print number of args passed
 *
 * @argc: number of args
 * @argv: array of the passed args
 *
 * Return: 0
 */

int main(int argc, char __attribute__((unused)) **argv)
{
	_putchar('0' + (argc - 1));
	_putchar('\n');
	return (0);
}
