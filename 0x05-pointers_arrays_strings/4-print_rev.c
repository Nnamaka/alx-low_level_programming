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

	for (i++; i >= 0; i--)
		if (*(s + i) != '\0')
			_putchar(*(s + i));

	_putchar('\n');
}
