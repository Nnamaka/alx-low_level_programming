#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to perform the search on
 * @accept: string to be searched for
 * Return: Returns a pointer to the byte in @s that matches a byte in accept
*/
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
			if (*s == accept[j])
				return (s);
		s++;
	}

	return (0);
}
