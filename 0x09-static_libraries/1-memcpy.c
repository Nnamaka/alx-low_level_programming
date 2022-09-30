#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: memory destination
 * @src: memory source
 * @n: number of bytes to copy
 * Return: returns the pointer of the destination string
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
