#include "main.h"
/**
 * _islower - check for lower case letters
 * @c: integer parameter to check for case type
 * Return: returns 1 on success and 0 on failure
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
