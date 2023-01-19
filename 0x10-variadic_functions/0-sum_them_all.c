#include "variadic functions.h"
#include <stdio.h>
/**
 * sum_them_all - returns the sum of the args
 * @n: first arg
 * Return: result of the sum of the arg
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int a;
	int result;

	result = 0;
	va_list and;

	va_start(and, n);

	if (n == 0)
		return (0);

	for (a = 0; a < n; a++)
		result += va_arg(and, int);
	va_end(and);

	return (result);
}
