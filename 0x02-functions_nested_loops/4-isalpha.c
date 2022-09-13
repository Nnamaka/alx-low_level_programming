#include "main.h"
/**
 * _isalpha - check character for alphabet
 * @c: paremeter to function.
 * Return: return 1 for success and 0 in failure
 */
int _isalpha(int c)
{
	if ((c >= 97 & c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
