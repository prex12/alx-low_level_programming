#include "main.h"

/**
 * leet - replaces chaaracters
 * with integers
 *
 * @str: pointer to strings
 * Return: str converted output
 */

char *leet(char *str)
{
	char a[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char b[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	int c, d;

	for (c = 0; str[c] != '\0'; c++)
	{
		for (d = 0; d < 10; d++)
		{
			if (str[c] == a[d])
			{
				str[c] = b[d];
			}
		}
	}

	return (str);
}
