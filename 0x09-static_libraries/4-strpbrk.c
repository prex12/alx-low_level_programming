#include "main.h"
/**
 * _strpbrk - locates the occurence in the string
 * @s: pointer to string
 * @accept: the bytes that guide the s string
 * Return: pointer s or NULL if no byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; *s != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (*s == accept[b])
				return (s);
		}
		s++;
	}

	return (NULL);
}
