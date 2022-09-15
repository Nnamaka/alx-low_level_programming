#include "main.h"
#include <ctype.h>
/**
 * _isupper - checks for case of characters
 * @c: represent a single letter
 * Return: returns 1 if true and 0 if false
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
