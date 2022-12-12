#include <stdio.h>

/**
 * _isupper - a function that checks for uppercase character.
 *
 * @c: check the input
 *
 * Return: 1 if c is uppercase and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int main(void)
{
	char c;

	c = 'b';
	printf("%c: %d\n", c, _isupper(c));
	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
