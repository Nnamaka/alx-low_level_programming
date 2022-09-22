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

	int i = 0;
	int j = 0;

	while(dest[i])
		i++;

	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
