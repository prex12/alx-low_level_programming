#include "main.h"
#include <unistd.h>
/**
 * _islower - checks for lowercase character
 *
 * @c: int to be checked
 * Return: prints 1 if c is lowercase
 * print 0 otherwise
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
