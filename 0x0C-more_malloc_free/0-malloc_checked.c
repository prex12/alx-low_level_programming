#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - creates space in memory
 * for b
 * @b: int passed
 * Return: pointer to address in memory
 */
void *malloc_checked(unsigned int b)
{
	void *space;

	space = malloc(b);

	if (space == NULL)
		exit(98);

	return (space);
}
