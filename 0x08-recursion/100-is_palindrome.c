#include "main.h"

/**
 * _strlen - function to return length of s
 *
 * @s: String value
 *
 * Return: lenght.
 */

int _strlen(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += _strlen(s + 1) + 1;
	return (n);
}

/**
 * checker - check similarity of character
 *
 * @s: string value
 *
 * @start: marks starting point of string
 *
 * @len: marks the lenght of string
 *
 * @middle: marks the middle of the string
 *
 * Return: 0 or 1
 */

int checker(char *s, int start, int len, int middle)
{
	if (s[start] != s[len])
		return (0);
	else if (start >= middle)
		return (1);
	else
		return (checker(s, start + 1, len - 1, middle));
}

/**
 * is_palindrome - check if a string is palindrome
 *
 * @s: Check the input
 *
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (checker(s, 0, len - 1, len / 2));
}
