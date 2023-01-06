#include <stdio.h>
#include "main.h"
/**
 * main - prints the name of program
 * @argc: size of argv
 * @argv: argument of size argc passed with executable
 * program
 * Return: 0 Success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
