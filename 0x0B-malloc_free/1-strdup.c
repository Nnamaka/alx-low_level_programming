#include <stdlib.h>
/**
 * _strdup - copy a string to a newly allocated space in memory
 * @str: string to be copied
 * Return: Returns a pointer to the newly allocated memory of string
*/
char *_strdup(char *str)
{
	char *n_mem;
	int i, len = 0;

	if (str == NULL)
		return ('\0');

	while (s[len] != '\0')
		len++;

	len++;

	n_mem = malloc(sizeof(*str) * len);

	if (n_mem == NULL)
		return ('\0');

	i = 0;

	while (i < len)
	{
		n_mem[i] = str[i];
		i++;
	}

	n_mem[i] = '\0';

	return (n_mem);
}
