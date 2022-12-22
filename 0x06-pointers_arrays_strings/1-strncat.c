#include "main.h"

/**
 * _strncat - concatinates string with limited bytes
 * @dest: destination string
 * @src: source string
 * @n: limit for bytes
 * Return: destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;

	while (dest[a] != '\0')
		a++;

	b = 0;

	while (src[b] != '\0' && b <= n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';

	return (dest);
}
