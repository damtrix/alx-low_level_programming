#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print 0 to 9 in combinatio comma and space
 *
 * Return: 0
 */

int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if (a != 9)
		{
			putchar(a + '0');
			putchar(',');
			putchar(' ');
		}
		else
			putchar('9');
	}
	putchar('\n');
	return (0);
}
