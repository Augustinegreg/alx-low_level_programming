#include "main.h"

/**
 * print_chessboard - prints the chessboard
 *
 * @a: two dimension array to print
 */
void print_chessboard(char (*a)[8])
{
	int a, b;

	for (a = 0; a < 8; b++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(a[a][b]);
		}
		_putchar('\n');
	}
}
