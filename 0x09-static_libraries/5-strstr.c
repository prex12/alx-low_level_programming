#include "main.h"
/**
 * _strstr - locates a string as a subset of a string
 * @haystack: pointer to a string set
 * @needle: pointer to string subset
 * Return: the pointer to the haystack string and NULL
 * if not present
 */
char *_strstr(char *haystack, char *needle)
{
	int a, b;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (haystack[a + b] != needle[b])
				break;
		}
		if (!needle[b])
			return (&haystack[a]);
	}
	return (NULL);
}
