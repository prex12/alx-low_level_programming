#include "variadic_functions"
/**
 * print_strings - prints strings passed as arg
 * @separator: separator string
 * @n: number of arg passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	char *str;
	va_list arg;

	va_start(arg, n);

	for (a = 0; a < n; a++)
	{
		str = va_arg(arg, char *);

		if (separator == NULL)
			str = "(nil)";
		if (separator == NULL)
			printf("%s", str);
		else if (separator && a == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}
	printf("\n");

	va_end(arg);
}
