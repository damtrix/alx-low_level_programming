#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @s1: Check the input
 *
 * @s2: Check the input
 *
 * @n: Check the input
 *
 * Return: Always null or pointer str.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1, len2, k, l;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = len2 = 0;
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	str = malloc((len1 * n + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (k = 0; s1[k] != '\0'; k++)
		str[k] = s1[k];

	for (l = 0; l < n && s2[l] != '\0'; l++)
	{
		str[k] = s2[l];
		k++;
	}
	str[k] = '\0';
	return (str);
}
