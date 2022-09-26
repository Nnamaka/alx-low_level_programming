#include "main.h"
/**
 * print_chessboard - a function that prints a chessboard
 * @a: two dimensional array
 * Return: returns nothing
*/
void print_chessboard(char (*a)[8])
{
	unsigned int i, j;

	i = 0;

	while (i < 8)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
		i++;
	}
}
