#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the summ of the two diagonals of a square matrix
 * @a: pointer to array
 * @size: size of the array
 * Return: returns nothing
*/
void print_diagsums(int *a, int size)
{
	int i;
	int first = 0;
	int second = 0;

	for (i = 0; i < size; i++)
	{
		first += a[i];
		second += a[size - i - 1];
		a += size;
	}
	printf("%i, ", first);
	printf("%i\n", second);
}
