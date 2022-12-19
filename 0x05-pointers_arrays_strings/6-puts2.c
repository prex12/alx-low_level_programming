#include "main.h"
/**
 * puts2 - prints in between string passed
 * @str: pointer where its stored
 */

void puts2(char *str)
{
	int a, b;

	a = 0;

	while (str[a] != '\0')
		a++;

	for (b = 0; b < a; b++)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
