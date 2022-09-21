#include "main.h"
/**
 * _strncpy - copy character string from src to dest
 * @dest: destination of string from the copying
 * @src: source of character string to be copied
 * @n: number of characters t o be copied
 * Return: returns a pointer to the copied character string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i]; i++)
		dest[i] = src[i];
	if (src[i] == '\0')
		dest[i] = src[i];

	return (dest);
}
