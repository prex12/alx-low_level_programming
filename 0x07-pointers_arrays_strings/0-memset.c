#include "main.h"
/**
 * _memset - changes the string s to b in memory guided by n bytes
 * @s: pointer to a string variable
 * @b: memory change parameter
 * @n: number of bytes
 * Return: pointer value of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	for (unsigned int a = 0; a < n; a++)
		s[a] = b;
	return (s);
}
