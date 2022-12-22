#include "main.h"

/**
 * cap_string - transforms first letter
 * of every word to uppercase
 * @str: pointer to each character in string
 * Return: str
 */

char *cap_string(char *str)
{
	int a;
	char me[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	a = 0;
	while (str[a] != '\0')
	{
		if (a == 0 && str[a] >= 'a' && str[a] <= 'z')
			str[a] = str[a] - 32;
		for (int b = 0; b < 13; b++)
		{
			if (str[a] == me[b])
			{
				if (str[a + 1] >= 'a' && str[a + 1] <= 'z')
					str[a + 1] = str[a + 1] - 32;
			}
		}
		a++;
	}

	return (str);
}
