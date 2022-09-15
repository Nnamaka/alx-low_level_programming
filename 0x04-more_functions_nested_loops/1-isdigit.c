#include "main.h"
#include <ctype.h>
/**
 * _isdigit - checks if a character is digit or not
 * @c: an argument holding the variable of the character to be checked
 * Return: returns 1 if digit and 0 if not
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
