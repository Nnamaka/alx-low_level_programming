#include "main.h"
/**
 * _strcat - adds the src string to the dest string
 * @dest: the pointer argument to the destination string
 * @src: the pointer argument to the source string
 * Return: returns a pointer to the destination string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i]; i++)
		;

	dest[i] = ' ';
	i++;

	for (j = 0; src[j]; j++)
		dest[i++] = src[j];

	return (dest);
}
