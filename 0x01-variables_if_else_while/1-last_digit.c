#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 *
 * Return: Always 0(Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = n % 10;
	if (d > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, d);
	else if (d == 0)
		printf("Last digit of %d is %d and is 0\n", n, d);
	else if (d < 6 && 6 != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, d);
	/* your code goes there */
	return (0);
}
