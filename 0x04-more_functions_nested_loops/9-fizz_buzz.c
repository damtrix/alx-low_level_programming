#include "main.h"

/**
 * main - a program that prints the numbers from 1 to 100, followed
 *        by a new line. But for multiples of three print Fizz instead
 *	  of the number and for the multiples of five print Buzz.
 *        For numbers which are multiples of both three and five printFizzBuzz
 *
 * Return: 0
 */

int main(void)
{
	int c = 1;

	while (c <= 100)
	{
		if ((c % 3) == 0)
		{
			if ((c % 15) == 0)
			{
				printf("FizzBuzz ");
			}
			else
				printf("Fizz ");
		}
		else if ((c % 5 == 0))
		{
			if ((c % 15) == 0)
			{
				printf("FizzBuzz ");
			}
			else
				printf("Buzz ");
		}
		else
			printf("%d ", c);
		c++;
	}
	printf("\n");
}
