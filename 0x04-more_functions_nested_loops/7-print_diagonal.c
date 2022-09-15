#include "main.h"
/**
 * print_diagonal - diagonal lines made of backslashes
 * @n: number of characters to be printed
 * Return: returns nothing
 */

void print_diagonal(int n)
{
	int i = 0, ii;

	while (i < n && n > 0)
	{
		ii = 0;
		while (ii < i)
		{
			_putchar(' ');
			ii++;
		}

		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
