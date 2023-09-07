#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to different string
 *
 * @s1: string appended to
 *
 * @s2: string concatenated from
 *
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int a = 0, b = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!s)
		return (NULL);

	while (b < len1)
	{
		s[b] = s1[b];
		b++;
	}

	while (n < len2 && b < (len1 + n))
		s[b++] = s2[a++];

	while (n >= len2 && b < (len1 + len2))
		s[b++] = s2[a++];

	s[b] = '\0';

	return (s);
}
