#incude "main.h"

/**
 *
 *
 */
char *string_toupper(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (str[a] >= 'a' && str[a] <= 'z')
			return (str[a] >= 'A' && str[a] <= 'Z');
	}
	return (str);
}
