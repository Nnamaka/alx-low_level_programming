#include "main.h"
/**
 * rev_string - reverses a string
 * @s: argument of type char pointer
 * Return: returns nothing
 */
void rev_string(char *s)
{
	int i, j;
	char temp;

	for (i = 0; *(s + i); i++)
		;

	for (j = 0; i >= 0; j++, i--)
		if (i == j)
		{
			break;
		}
		else
		{
			temp = *(s + i);
			*(s + i) = *(s + j);
			*(s + j) = temp;
		}
}
