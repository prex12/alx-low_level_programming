#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array of integers
 * @size: size of array
 * @cmp: pointer to comparism function
 *
 * Return: pointer to first element
 */
int int_index(int *array, int *size, int (*cmp)(int))
{
	int a;

	if (array && cmp)
	{
		for (a = 0; a < size; a++)
		{
			if (cmp(array[a] != 0)
				return (a);
		}
	}

	return (-1);
}
