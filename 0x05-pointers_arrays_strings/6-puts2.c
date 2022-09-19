#include "main.h"
/**
 * puts2 - prints every other character
 * @str: char pointer argument
 * Return: returns nothing
 */
void puts2(char *str)
{
	int i, j;

	for (j = 0; *(str + j); j++)
		;

	for (i = 0; *(str + i) && i < j; i += 2)
		_putchar(*(str + i));

	_putchar('\n');
}
