#include "main.h"
#include <unistd.h>
/**
 * _islower - returns 1 if character is lower case
 *
 * Return: 0 otherwise
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
