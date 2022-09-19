#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: char pointer argument
 * Return: returns nothing
 */
void puts_half(char *str)
{
	int i, n;

	for (i = 0; *(str + i); i++)
		;
	n = ((i - 1) / 2) + 1;

	for (; n <= (i - 1); n++)
		_putchar(*(str + n));

	_putchar('\n');
}
