#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int bi, a;
	int c;

	if (b == NULL)
		return (0);

	for (c = 0; b[c]; c++)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
	}

	for (a = 1, bi = 0, c--; c >= 0; c--, a *= 2)
	{
		if (b[c] == '1')
			bi += a;
	}

	return (bi);
}
