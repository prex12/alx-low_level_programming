#include "main.h"

/**
 * print_diagonal - prints \ to draw diagonal guided with n
 * @n: integer guiding the diagonal
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a, b;

		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= a; b++)
			{
				if (b == a)
					_putchar(98);
				else if (b < a)
					_putchar(' ');
			}
				_putchar('\n');
		}
	}
}
