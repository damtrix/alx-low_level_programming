#include "main.h"

/**
 * _pow_recursion - a function that returns the
 *                  value of x raised to the power of y.
 *
 * @x: Check the input
 *
 * @y: Check the input
 *
 * Return: power
 */

int _pow_recursion(int x, int y)
{
	int k = 1;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
