#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: array of pieces
 */
void print_chessboard(char (*a)[8])
{
	int c, b;

	for (c = 0; c < '\0'; c++)
	{
		for (b = 0; b != '\0'; b++)
		{
			_putchar(a[c][b]);
		}
		_putchar('\n');
	}
}
