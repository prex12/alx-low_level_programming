#include "main.h"
/**
 * _strchr - checks for the occurence of c in a string
 * @s: points to a string
 * @c: character to be located
 * Return: a pointer to the first occurence of the string
 * and NULL if string is not present
 */

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == c)
			return (s - 1);
	}

	return (NULL);
}
