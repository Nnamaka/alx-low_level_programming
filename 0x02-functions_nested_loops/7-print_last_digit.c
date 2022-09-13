#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: number to print last digit
 * Return: returns an integer value of the last digit of a certain number
 */
int print_last_digit(int n)
{
	if (n < 0)
		n %= -10;
	else
		n %= 10;

	_putchar(n + '0');

	return (n);
}

