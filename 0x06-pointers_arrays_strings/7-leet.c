#include "main.h"
/**
 * leet - encodes string
 * @str: char pointer argument of string to be encoded
 * Return: returns a pointer to encoded string
 */
char *leet(char *str)
{
	int i, j;

	char leet[8] = {'0', 'L', '?', 'E', 'A', '?', 'T'};

	for (i = 0; str[i]; i++)
	{
		for (j = 0; j < 7; j++)
			if (str[i] == leet[j] ||
					str[i] - 32 == leet[j])
				str[i] = j + '0';
	}

	return (str);
}
