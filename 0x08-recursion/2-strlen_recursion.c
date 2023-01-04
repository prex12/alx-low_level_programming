#include "main.h"
/**
 * _strlen_recursion - counts the number of characters
 * in a string
 * @s: pointer to the character
 * Return: number of character
 *
 */

int _strlen_recursion(char *s)
{
	int a = 0;

	if (*s == '\0')
		return (0);
	_strlen_recursion(s + 1);
	a++;
}
