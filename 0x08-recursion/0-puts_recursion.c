#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: points to each char in a string
 * Return: s when the NULL terminator is reached
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
