#include "main.h"
/**
 * print_numbers - print numbers form 0 - 9
 * Return: returns nothing
 */
void print_numbers(void)
{
	char i;

	for (i = '0'; i < '10'; i++)
		_putchar(i);

	_putchar('\n');
}
