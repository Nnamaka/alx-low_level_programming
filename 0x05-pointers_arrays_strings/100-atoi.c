#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: char pointer argument of string for conversion
 * Return: returns the converted number
 */
int _atoi(char *s)
{
	int i;
	int integer = 0;
	char signvalue = *s;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) >= '0' && *(s + i) <= '9')
			integer = (*(s + i) - '0') + (integer * 10);
	}

	if (signvalue == '-')
		integer *= -1;

	return (integer);
}
