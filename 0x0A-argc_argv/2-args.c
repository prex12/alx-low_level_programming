#include <stdio.h>
/**
 * main - prints arguements followed ny new line
 * @argc: arguement counter
 * @argv: arguemtent pointer
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);

	return (0);
}
