#include "main.h"
/**
 * reverse_array - reverses the content of an integer array
 * @a: pointer argument to array of type int
 * @n: number of elements of the array
 * Return: returns nothing
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[n - (i + 1)];
		a[n - (i + 1)] = temp;
	}
}
