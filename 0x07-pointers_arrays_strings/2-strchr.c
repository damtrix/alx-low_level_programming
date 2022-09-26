#include "main.h"

/**
 * main -  a function that locates a character in a string.
 *
 * Return: 0
 */

int main(void)
{
	char *s = "hello";
	char *f;

	f = _strchr(s, 'l');

	if (f != NULL)
	{
		printf("%s\n", f);
	}
	return (0);
}
