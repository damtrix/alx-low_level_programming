#include <stdio.h>

/**
 * main - a program that prints the numbers from 1 to 100, followed
 *        by a new line. But for multiples of three print Fizz instead
 *  of the number and for the multiples of five print Buzz.
 *        For numbers which are multiples of both three and five printFizzBuzz
 *
 * Return: 0
 */

int main(void)
{
	int c = 1;

	while (c <= 100)
	{
		if ((c % 3) == 0 && (c % 5) == 0)
			printf("FizzBuzz");
		else if ((c % 3) == 0)
			printf("Fizz");
		else if ((c % 5 == 0))
			printf("Buzz");
		else
			printf("%d", c);
		if (c != 100)
		{
			printf(" ");
		}
		c++;
	}
	printf("\n");
	return (0);
}
