#include <stdio.h>

/**
 * main: Entry point
 *
 * Description: prints all possible different combinations of three digits
 *
 * Return: 0
 */

int main(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				if (a != b && b != c && a < b && b < c)
				{
					putchar(a + 48);
					putchar(b + 48);
					putchar(c + 48);
					if (a + b + c != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
