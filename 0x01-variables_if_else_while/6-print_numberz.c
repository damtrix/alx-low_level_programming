#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print 0 to 9 whichout using char
 *
 * Return: 0
 */

int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}
