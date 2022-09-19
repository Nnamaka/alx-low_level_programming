#include "main.h"
#include <stdio.h>
/**
 * print_array - print a numbert of values of an integer array
 * @a: pointer integer argument
 * @n: parameter to indicate the number of values to print
 * Return: returns nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		if (i + 1 == n)
			printf("%i", *(a + i));
		else
			printf("%i, ", *(a + i));

	printf("\n");
}
