#include "main.h"

/**
 * print_line - prints n number of line
 * followed by next line
 * @n: the int that controls the length of the line
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int a;

		for (a = 0; a <= n; a++)
			_putchar('_');
		_putchar('\n');
	}
}
