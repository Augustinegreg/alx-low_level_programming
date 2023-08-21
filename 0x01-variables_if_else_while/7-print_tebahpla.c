#include <stdio.h>
/**
 *main - Entry point
 *Description: print lowercase alphabet backwards
 *Return: 0
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; --c)
	putchar(c);

	putchar('\n');

	return (0);
}
