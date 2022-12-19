#include "main.h"

/**
 * rev_string - reverses string
 * @s: pointer to the string
 */

void rev_string(char *s)
{
	int a, b, c;
	char me;

	a = 0;
	b = 0;

	while (s[a] != '\0')
		a++;

	b = a - 1;

	for (c = 0; c < a / 2;  c++)
	{
		me = s[c];
		s[c] = s[b];
		s[b--] = me;
	}
}
