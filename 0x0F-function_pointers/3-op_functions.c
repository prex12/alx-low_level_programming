#include "3-calc.h"

/**
 * op_add - adds arguments and returns value
 * @a: first parameter int
 * @b: second parameter int
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts b from a 
 * @a: first int
 * @b:second int
 * Return: reuslting value
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - muliplies a and b
 * @a: first int
 * @b: second int
 * Return: a times b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a by b
 * @a: first int
 * @b: second int
 * Return: a divided by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns modulus of a and b
 * @a: first int
 * @b: second int
 * Return: a modulo b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
