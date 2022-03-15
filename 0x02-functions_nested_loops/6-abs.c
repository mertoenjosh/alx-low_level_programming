#include "main.h"

/**
 * _abs - prints absolute value of an integer
 * @x: Passed to be checked
 *
 * Return: absolute value of x

int _abs(int x)
{
	if (x < 0)
	{
		return (-x);
	}
	else
	{
		return (x);
	}
}
