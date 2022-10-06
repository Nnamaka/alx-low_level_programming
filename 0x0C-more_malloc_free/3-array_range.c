#include <stdlib.h>
/**
 * array_range - creates an integer array of range @min - @max
 * @min: minimum value of the array 
 * @max: maximum value of the array
 * Return: returns pointer to new array on success else NULL
*/
int *array_range(int min, int max)
{
	int i, n;
	int *ptr;

	if (min > max)
		return ('\0');

	n = (max - min) + 1;
	ptr = malloc(sizeof(int) * n);

	if (ptr == NULL)
		return ('\0');

	for (i = 0; i < n; i++)
		ptr[i] = min + i;

	return (ptr);
}
