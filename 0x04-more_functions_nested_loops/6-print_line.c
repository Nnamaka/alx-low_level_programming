#include "holberton.h"

/**
 * print_line - the function prints a line
 * @n: argument
 *
 * Return: returns nothing
 */

void print_line(int n)
{
	int b = 0;

	while (b < n && n > 0)
	{
		_putchar('_');
		b++;
	}
	_putchar('\n');
}
