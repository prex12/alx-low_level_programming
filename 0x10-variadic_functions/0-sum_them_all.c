#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of the args
 * @n: first arg
 * Return: result of the sum of the arg
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int a;
	int result;
	va_list and;

	result = 0;

	va_start(and, n);

	for (a = 0; a < n; a++)
		result += va_arg(and, int);
	va_end(and);

	return (result);
}
