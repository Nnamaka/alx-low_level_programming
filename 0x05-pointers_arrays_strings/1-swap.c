#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: first pointer argument
 * @b: second pointer argument
 * Return: returns nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
