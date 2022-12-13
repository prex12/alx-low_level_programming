#include "main.h"
/**
 * print_alphabet - prints all lowercase alphabets
 *
 * followed by new line
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');
}
