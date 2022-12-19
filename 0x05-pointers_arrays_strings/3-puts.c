#include "main.h"

/**
 * _puts - prints a passed string or strings to the stdout
 * @str: string collects here
 */

void _puts(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
		_putchar(str[c]);
	_putchar('\n');
}
