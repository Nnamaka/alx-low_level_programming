#include "main.h"
/**
* _memset - fills memory with constant byte
* @s: memory area pointed to
* @b: byte to fill memory area
* @n: number of bytes
* Return: returns a pointer to the memory area @s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
