#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function passed as
 * arguement
 * @array: array to iterate
 * @size: size of the array
 * @action: pointer function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	a = 0;
	if (!array || !action)
		return;

	while (a < size)
	{
		action(array[a]);
		a++;
	}
}
