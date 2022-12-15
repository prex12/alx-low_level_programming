#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;

	for (a = 0; a <= 100; a++)
	{
		if ((a % 3) == 0)
			printf("Fizz");
		else if ((a % 5) == 0)
			printf("Buzz");
		else if ((a % 3) && (a % 5) == 0)
			printf("FizzBuzz");
	}
	printf("\n");

	return (0);
}
