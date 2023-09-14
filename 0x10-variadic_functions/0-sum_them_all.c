#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of all its parameters
 *
 * @n: number of arguments passed to the function
 *
 * Return: summed up result
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list l;

	va_start(l, n);

	for (i = 0; i < n; i++)
		sum += va_arg(l, int);

	va_end(l);

	return (sum);
}
