#include <stdlib.h>
#include "main.h"
/**
 * array_range - fn creates an array of ints
 * @min: minimum range
 * @max: maximum range
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int a = 0, size = max - min + 1;
	int *b;

	if (min > max)
		return (NULL);
	b = malloc(sizeof(int) * size);

	if (b == NULL)
		return (NULL);
	while (min <= max)
	{
		b[a] = min++;
		a++;
	}
	return (b);
}
