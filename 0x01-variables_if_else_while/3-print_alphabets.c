#include <stdio.h>

/**
 * main - Entry point
 *
 * Descrption: print both lowercase and uppercase
 *             alphabet using putchar
 *
 * Return: 0
 */

int main(void)
{
	char ch, CH;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for (CH = 'A'; CH <= 'Z'; CH++)
	{
		putchar(CH);
	}

	putchar('\n');
	return (0);
}
