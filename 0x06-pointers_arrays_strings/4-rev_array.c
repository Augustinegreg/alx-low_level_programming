#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int y, z, tmp;

	z = n - 1;

	for (y = 0; y < n / 2; y++)
	{
		tmp = a[y];
		a[y] = a[z];
		a[z--] = tmp;
	}
}
