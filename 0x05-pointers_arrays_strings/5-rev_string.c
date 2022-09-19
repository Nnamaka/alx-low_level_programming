#include "main.h"
/**
 * rev_string - reverses a string
 * @s: argument of type char pointer
 * Return: returns nothing
 */
void rev_string(char *s)
{
	int i, j, k;

	for (i = 0; *(s + i); i++)
		;

	char temp[i];

	for (j = 0; i >= 0; i--, j++)
		temp[j] = *(s + i);

	for (k = 0; k <= j; k++)
		*(s + k) = temp[k];
