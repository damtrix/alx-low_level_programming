#include "main.h"

/**
 * _sqrt - function to find the square base on half of the n
 *
 * @k: Value of n
 *
 * @l: The half of n
 *
 * Return: answer
 */

int _sqrt(int k, int l)
{
	if (l * l == k)
		return (l);
	else if (l * l > k)
		return (_sqrt(k, l - 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - a function that returns
 *                   the natural square root of a number.
 *
 * @n: Check the input
 *
 * Return: Square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (_sqrt(n, n / 2));
}
