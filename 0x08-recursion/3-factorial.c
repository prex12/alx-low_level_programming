#include "main.h"
/**
 * factorial - computes factorial of values
 * @n: integer argument
 * Return: -1 if n is less than 0
 * 1 if n is exactly 0 and the factorial of values
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
