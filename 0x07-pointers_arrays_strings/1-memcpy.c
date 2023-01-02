#include "main.h"
/**
 * _memcpy - copies the string value from src into dest
 * @dest: desination pointer
 * @src: source pointer
 * @n: number of bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];

	return (dest);
}
