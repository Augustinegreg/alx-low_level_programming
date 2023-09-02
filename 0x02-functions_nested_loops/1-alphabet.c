#include "main.h"

/**
 *print_alphabet - prints lowercase alphabet
 *
 *return: 0(Success)
 */

void print_alphabet(void)
{
	int q;

	for (q = 'a'; q <= 'z'; q++)
		_putchar(q);
	_putchar('\n');
}
