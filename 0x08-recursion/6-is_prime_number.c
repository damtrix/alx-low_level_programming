#include "main.h"

/**
 * prime - A function to check for prime number
 *
 * @k: value of n
 *
 * @l: start 2 then increases by 1
 *
 * Return: either 0 or 1.
 */

int prime(int k, int l)
{
	if (k == l)
		return (1);
	else if (l < k)
	{
		if (k % l == 0)
			return (0);
		else
			return (prime(k, l + 1));
	}
	else
		return (0);
}

/**
 * is_prime_number - calls prime to check prime number
 *
 * @n: Check the input
 *
 * Return: prime
 */

int is_prime_number(int n)
{
	if (n < 0 || n == 1)
	{
		return (0);
	}
	return (prime(n, 2));
}
