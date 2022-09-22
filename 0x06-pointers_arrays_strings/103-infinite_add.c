#include "main.h"
/**
 * infinite_add - function that adds two numbers for a certain buffer size
 * @n1: char pointer argument
 * @n2: char pointer argument
 * @r: char pointer argument for the buffer
 * @size_r: size of buffer
 * Return: returns 0 on fail and char pointer on success
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, width, first, second, remainder = 0;

	for (i = 0; n1[i]; i++)
		;
	for (j = 0; n2[j]; j++)
		;
	width = j;
	if  (i > j)
		width = i;
	if (width + 1 >= size_r)
		return (0);
	r[width] = '\0';

	for (k = width - 1; k >= 0; k--)
	{
		i--, j--;
		if (i >= 0)
			first = n1[i] - '0';
		else
			first = 0;
		if (j >= 0)
			second = n2[j] - '0';
		else
			second = 0;

		r[k] = ((first + second + remainder) % 10) + '0';
		remainder = (first + second + remainder) / 10;
	}

	if (remainder == 1)
	{
		r[width + 1] = '\0';
		if (width + 2 > size_r)
			return (0);
		while (width-- >= 0)
			r[width + 1] = r[width];
		r[0] = remainder + '0';
	}
	return (r);
}
