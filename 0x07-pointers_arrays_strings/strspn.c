#include "main.h"

/**
 * @s: String where substring will look.
 *
 * @accept: Substring of accepted chars.
 * 
 * Return: new string.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	char *c = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				a++;
				break;
			}
		if (!(*--accept))
			break;
		accept = z;
	}
	return (a);
}
