#include "main.h"
/**
 * _sqrt - iterate incrementaly over a number to check for square root
 * @a: integer argument
 * @b: integer argument
 * Return: returns value of square root of @b
*/
int _sqrt(int a, unsigned int b)
{
	if (a * a == b)
		return (a);
	if (a == 1)
		return (-1);
	return (_sqrt((a - 1), b));
}

/**
 * _sqrt_recursion - retuns the natural square root of a number
 * @n: integer argument
 * Return: returns an integer value of the square root of a number
*/
int _sqrt_recursion(unsigned int n)
{
	if (n <= 0)
		return (-1);
	if (n == 1)
		return (1);
	return (_sqrt((n / 2), n));
}
