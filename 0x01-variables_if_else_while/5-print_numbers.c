#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print single digit from 0 t0 9
 *
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
