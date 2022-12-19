#include "main.h"

/**
 * _puts - prints a passed string or strings
 * @str: string collects here
 * followed by new line
 *
 */

void _puts(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
		_putchar(str[c]);
	_putchar('\n');
}
