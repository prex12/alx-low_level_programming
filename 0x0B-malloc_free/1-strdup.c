#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - copies a given string passedas arg
 * @str: pointer to the string duplicate
 * Return: NULL if error is encountered
 * and pointer to deplicate string
 */
char *_strdup(char *str)
{
	char *new;
	unsigned int n, b;

	if (str == NULL)
		return (NULL);
	b = 0;
	while (str[b])
		b++;
	new = (char *) malloc((n + 1) * sizeof(char));

	if (new == NULL)
		return (NULL);

	while ((new[n] = str[n]) != '\0')
		n++;

	return (new);
}
