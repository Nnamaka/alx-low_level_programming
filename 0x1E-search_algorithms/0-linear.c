#include "search_algos.h"
/**
* linear_search - goes through a Array list to find
* a certain value
* @array: array of values
* @size: size of the provided array
* @value: value to be searched for
* Return: return index of found value
*/
int linear_search(int *array, size_t size, int value)

{
	int i;

	if (array == NULL)
		return (-1);


	for (i = 0; i < (int)size; i++)
	{
		if (value == array[i])
		{
			return (i);
		}
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
	}
	return (-1);
}
