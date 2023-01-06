#include "main.h"

/**
 * _strncpy - copies string from src pointer into dest guided by n
 * @dest: desination pointer
 * @src: source pointer
 * @n: guide number of bytes
 * Return: dest pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;

	while (src[a] != '\0' && a < n)
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
