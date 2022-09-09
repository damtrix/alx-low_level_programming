#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all letter of base 16 in lowercase
 *
 * Return: 0
 */

int main(void)
{
	int x, y;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	for (y = 'a'; y <= 'f'; y++)
	{
		purchar(y);
	}
	putchar('\n');
	return (0);
}
