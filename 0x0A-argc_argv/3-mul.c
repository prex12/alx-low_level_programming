#include <stdio.h>
#include "main.h"
/**
 * main - multipies 2 arguements
 * @argc: number of arguemnts
 * @argv: array of arguements passed
 * Return: 0 Success and 1 on error
 */
int _add2(char *s);

int main(int argc, char *argv[])
{
	int first, second, result;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	first = _add2(argv[1]);
	second = _add2(argv[2]);
	result = first * second;

	printf("%d\n", result);

	return (0);
}
/**
 * _add2 - takes 2 digit arguements from the cli
 * @s: pointer to arguments
 * Return: 0 on success and the value of c
 */
int _add2(char *s)
{
	int a = 0, b = 0, c = 0, d = 0, lenght = 0, digit = 0;

	while (s[a] != '\0')
		lenght++;

	while (a < lenght && d == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (b % 2)
				digit = -digit;
			c = c * 10 + digit;
			d = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			d = 0;
		}
		a++;
	}
	if (d == 0)
		return (0);

	return (c);
}
