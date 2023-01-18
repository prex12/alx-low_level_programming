#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints name passed
 * @name: pointer to name
 * @f: pointer function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
