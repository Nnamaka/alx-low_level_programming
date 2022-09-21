#include "main.h"
/**
 * _strncat - adds a given amount (n) of the src string to the dest string
 * @dest: the pointer argument to the destination string
 * @src: the pointer argument to the source string
 * @n: the number of bytes/characters to be added
 * Return: returns a pointer to the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i]; i++)
		;

	dest[i] = ' ';

	for (j = 0; src[j] && j < n; j++)
		dest[i++] = src[j];

	return (dest);
}
