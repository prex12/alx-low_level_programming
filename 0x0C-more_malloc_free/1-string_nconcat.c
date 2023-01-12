#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - function concatinates n
 * bytes from s2 into s1
 * @s1: destination string
 * @s2: sources string
 * @n: number of bytes to be taken
 * Return: pointer to new concatinated
 * string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int b = 0, c = 0, len_1 = 0, len_2 = 0;

	while (s1 && s1[len_1])
		len_1++;

	while (s2 && s2[len_2])
		len_2++;

	if (n < len_2)
		a = malloc(sizeof(char) * (len_1 + n + 1));
	else
		a = malloc(sizeof(char) * (len_1 + len_2 + 1));

	if (!a)
		return (NULL);

	while (b < len_1)
	{
		a[b] = s1[b];
		b++;
	}

	while (n < len_2 && b < (len_1 + n))
		a[b++] = s2[c++];

	while (n >= len_2 && b < (len_1 + len_2))
		a[b++] = s2[c++];

	a[b] = '\0';

	return (a);
}
