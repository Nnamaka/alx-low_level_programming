#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - Executes a function given as a parameter on array elements
 * @array: an array
 * @size: length of the array
 * @action: function pointer for a callback function
 * Return: returns nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!action || !array)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
