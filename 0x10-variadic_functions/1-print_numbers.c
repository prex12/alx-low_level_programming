#include "variadic_functions.h"
/**
 * print_numbers - prints numbers passed as argument
 * @separator: seperates each arguement
 * @n: int arguements
 */
void print_numbers(const char *separator, cont unsigned int n, ...)
{
	unsigned int a;
	va_list arg;

	va_start(arg, n);

	for (a = 0; a < n; a++)
	{
		if (!separator)
			printf("%d", va_arg(arg, int));
		else if (separator && a == 0)
			printf("%d", va_arg(arg, int));
		else
			printf("%s%d", separator, va_arg(arg, int));
	}
	va_end(arg);

	printf("\n");
}
