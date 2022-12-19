#include "main.h"
/**
 * print_array - prints array variables
 * @a: points to elements of  array
 * @n: the size of array elements
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		if (b == 0)
			printf("%d", a[b]);
		else
			printf(", %d", a[b]);
	}
	printf("\n");
}
