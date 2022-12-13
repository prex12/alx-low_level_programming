#include "main.h"
/**
 * _isalpha -  checks for alphabetic character
 * @c: int to be checked
 * Return: print 1 if c is lowercase or uppercase
 * print 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
