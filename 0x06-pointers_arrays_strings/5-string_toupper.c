#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @str: char pointer argument to the string to be changed
 * Return: returns pointer to the changed string
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

	return (str);
}
