#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatinates 2 strings
 * @s1: pointer to first string
 * @s2: ppointer to second string
 * Return: the pointer concatinated string
 */
char *str_concat(char *s1, char *s2)
{
	char *newcat;
	unsigned int a, b, c, d;

	a = 0;
	b = 0;

	while (s1 && s1[a])
		a++;
	while (s2 && s2[b])
		b++;

	newcat = malloc((a + b + 1) * sizeof(char));
	if (newcat == NULL)
		return (NULL);
	c = 0;
	d = 0;

	if (s1)
	{
		while (c < a)
		{
			newcat[c] = s1[c];
			c++;
		}
	}
	if (s2)
	{
		while (c < (a + b))
		{
			newcat[c] = s2[d];
			c++;
			d++;
		}
	}
	newcat[c] = '\0';

	return (newcat);
}
