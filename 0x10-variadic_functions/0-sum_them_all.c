#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 *
 * @n: number of parameters
 *
 * Return: sum of all its parameters, or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int i;
	int sum;
	va_list args;

	va_start(args, n);
	for(i = 0; i < n; i++)
	{
		sum += va_list(args, int);
	}
	va_end(args);
	return(sum);
}
