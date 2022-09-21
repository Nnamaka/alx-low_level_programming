#include "main.h"
/**
 * leet - encodes string
 * @str: char pointer argument of string to be encoded
 * Return: returns a pointer to encoded string
 */
char *leet(char *str)
{
	int i, j;

	char leet[] = "oOlLeEaAtT";
	char fig[] = "0011334477";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; leet[j]; j++)
			if (str[i] == leet[j] ||
					str[i] - 32 == leet[j])
				str[i] = fig[j];
	}

	return (str);
}
