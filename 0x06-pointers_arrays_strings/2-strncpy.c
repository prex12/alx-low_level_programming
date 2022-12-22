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

	while (dest[a] != '\0')
		a++;

	for (int b = 0; (b != '\0') && (b < n); b++)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';

	return (dest);
}
