#include "main.h"
/**
 * _sqrt_recursion - retuns the natural square root of a number
 * @n: integer argument
 * Return: returns an integer value of the square root of a number
*/
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (sqrt((n / 2), n));
}

/**
 * sqrt - iterate incrementaly over a number to check for square root
 * @a: integer argument
 * @b: integer argument
 * Return: returns value of square root of @b
*/
int sqrt(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a == 1)
		return (-1);
	return ((a - 1), b);
}
