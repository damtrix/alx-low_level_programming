#include <stdio.h>

/**
 * main - print lowercase a-z without using printf
 *
 * Return - 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	return (0);
}
