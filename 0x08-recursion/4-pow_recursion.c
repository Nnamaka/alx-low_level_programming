#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: interger argument
 * @y: power to be raised to
 * Return: returns integer value
*/
int _pow_recursion(int x, int y)
{
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
