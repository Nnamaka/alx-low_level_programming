#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer to char string argument
 * @c: character to locater
 * Return: returns pointer to found string
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}

	return (0);
}
