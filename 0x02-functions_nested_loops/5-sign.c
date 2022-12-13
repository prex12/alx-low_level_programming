#include "main.h"
/**
 * print_sign - prints int sign
 *
 *@n: integer to be tested
 * Return: 1 and print + for n greater than zero
 * prints 0 if n is zero
 * prints -1 if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
