#include <stdio.h>
/**
 * main - prints the number of arguements
 * @argc: stores the number of arguements
 * @argv: array of chars
 * Return: 0 success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int me;

	me = argc - 1;

	printf("%d\n", me);

	return (0);
}
