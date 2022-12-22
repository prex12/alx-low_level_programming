#include "main.h"

/**
 * _strcat - concatinates a source string to a destination string
 * @dest: destination string
 * @src: source string
 *
 * Return: destination string with appended string
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';

	return (dest);
}
