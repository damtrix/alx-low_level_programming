#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet in lowest except q and e
 *
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != q && ch != e)
		{
			putchar(ch);
		}
	}
	putchat('\n');
}
