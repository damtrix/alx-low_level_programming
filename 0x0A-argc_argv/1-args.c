#include "main.h"

/**
 * main - a program that prints its name, followed by a new line.
 *
 * @argc: count of the arguments supplied to the program.
 *
 * @argv: an array of pointers to the strings which are those arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
