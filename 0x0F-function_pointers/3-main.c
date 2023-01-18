#include "3-calc.h"

/**
 * main - Entry point to program
 * also texts code
 * @argc: int value of number of cl arguemnts
 * @argv: array containing the arguements
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int arg_1, arg_2, answer;
	char a;

	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	arg_1 = atoi(argv[1]);
	arg_2 = atoi(argv[3]);
	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	a = *argv[2];
	if ((a == '/' || a == '%') && arg_2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	answer = func(arg_1, arg_2);

	printf("%d\n", answer);

	return (0);
}
