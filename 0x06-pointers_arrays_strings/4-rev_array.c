#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: points to array to be reversed
 * @n: number of elements of array
 */

void reverse_array(int *a, int n)
{
	int d, b, p;

	b = n - 1;

	for (a = 0; a < n / 2; a++)
	{
		p = a[d];
		a[d] = a[b];
		a[b--] = p;
	}
}
