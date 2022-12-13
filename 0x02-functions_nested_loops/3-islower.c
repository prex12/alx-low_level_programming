#include "main.h"
#include <unistd.h>
/**
 * function returns 1 if a lowercase character is found
 * Returns 0 otherwise
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
