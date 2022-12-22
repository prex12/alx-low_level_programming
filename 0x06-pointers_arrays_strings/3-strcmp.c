#include "main.h"

/**
 *
 *
 *
 */
int _strcmp(char *s1, char *s2)
{
	int a, ch;

	ch = 0;

	for (a = 0; s1[a] != '\0' || s2[a] != '\0'; a++)
	{
		if (s1[a] != s2[a])
			ch = 1;
	}
	if (
}
