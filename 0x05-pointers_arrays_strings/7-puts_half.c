#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: char pointer argument
 * Return: returns nothing
 */
void puts_half(char *str)
{
	int i, n, j;

	for (i = 0; *(str + i); i++)
		;

	n = (i - 1) / 2;

	for (j = 0; j < n; j++)
		_putchar(*(str + j));

	_putchar('\n');
}
