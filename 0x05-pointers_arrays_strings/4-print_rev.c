#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: pointer argument
 * Return: returns nothing
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; *(s + i); i++)
		;

	for (i + 1; i >= 0; i--)
		_putchar(*(s + i));

	_putchar('\n');
}
