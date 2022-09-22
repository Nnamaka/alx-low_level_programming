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
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
