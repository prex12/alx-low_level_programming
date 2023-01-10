#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - creates a grid in 2 dimensions
 * @width: width of the grid
 * @height: height of grid
 * Return: NULL on error and pointer to the
 * created grid
 */
int **alloc_grid(int width, int height)
{
	int a, b, **c;

	if (width <= 0 ||height <= 0)
		return (NULL);
	c = (int **) malloc(sizeof(int*) * height);
	if (c = NULL)
		return (NULL);
	a = 0;
	while (a < height)
	{
		c[a] = (int *) malloc(sizeof(int) * width);
		if (c[a] == NULL)
		{
			free(c);
			for (b = 0; n <= a; b++)
				free(c[b]);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			c[a][b] = 0;
	}
	return (c);
}
