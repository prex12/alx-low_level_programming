#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - allocates space in heap memory for
 * @size: size of array
 * @c: character used to initialize array
 * Return: NULL on error and pointer to the array on
 * success
 */
char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *a;

	a = (char *) malloc(size * sizeof(char));
	if (size == 0)
		return (NULL);
	if (a == NULL)
		return (0);
	for (n = 0; n < size; n++)
	{
		*(a + n) = c;
	}
	*(a + n) = '\0';

	return (a);
}
