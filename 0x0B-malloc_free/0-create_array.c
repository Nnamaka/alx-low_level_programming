#include <stdlib.h>
/**
 * create_array - creates array and assigns it a character
 * @size: size of the array
 * @c: character to assign
 * Return: returns a pointer to the array
*/
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return ('\0');

	arr = malloc(size);

	if (arr == NULL)
		return ('\0')';

	i = 0;

	while (i < size)
	{
		arr[i] = c;
		i++;
	}

	arr[size] = '\0';

	return (arr);
}
