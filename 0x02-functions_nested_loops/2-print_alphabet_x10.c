#include "main.h"

/**
 * print_alphabet_x10 - prints all lower case alphabets
 *
 * and new line
 */
void  print_alphabet_x10(void)
{
	int a;
	char b;
	a = 0;

	while (a < 10)
	{
		b = 'a';
		while (b <= 'z')
			_putchar(b);
			b++;
		_putchar('\n');
		a++;
	}
}
