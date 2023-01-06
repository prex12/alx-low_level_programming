#include "main.h"

/**
 * _puts - prints a passed string or strings to the stdout
 * @str: string collects here
 */

void _puts(char *str)
{
	int c;

	c = 0;

	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
