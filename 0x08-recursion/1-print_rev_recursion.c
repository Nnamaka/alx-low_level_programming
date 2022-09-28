#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: character string
 * Return: returns nothing
*/
void _print_rev_recursion(char *s)
{
	if (*(s + 1) != '\0')
		_print_rev_recursion(s + 1);
	_putchar(*s);
}
