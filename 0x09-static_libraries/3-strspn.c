#include "main.h"
/**
 * _strspn - checks lenght of prefix substrings
 * @s: pointer to a string
 * @accept: points to other string with similar characters
 * Return: the number of bytes and 0
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b, c, well;

	a = 0;

	for (b = 0; s[b] != '\0'; b++)
	{
		well = 0;
		for (c = 0; accept[c] != '\0'; c++)
		{
			if (s[b] == accept[c])
			{
				well = 1;
				a++;
			}
		}
		if (well == 0)
			return (a);
	}
	return (0);
}
