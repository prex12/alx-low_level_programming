#include "main.h"

/**
 * print_last_digit - prints last digit of an integer
 *
 * @a: the integer to be checked for the last digit
 * Return: last digit value
 */
int print_last_digit(int a)
{
	int b;

	if (a < 0)
		a = -a;

	b = a % 10;

	if (b < 0)
		b = -b;
	_putchar(b + '0');

	return (b);
}
