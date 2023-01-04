#include "main.h"
/**
 * _pow_recursion - computes x to the power of y
 * @x: the first operand
 * @y: power
 * Return: -1 if y is less than 0 and the value of x
 * to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
