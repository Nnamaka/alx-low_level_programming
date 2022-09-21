#include "main.h"
/**
 * rot13 - encode string with rot13
 * @s: char pointer argument
 * Return: char pointer of encoded string
 */
char *rot13(char *s)
{
	int i, j;

	for (i = 0; s[i]; i++)
		if ((s[i] >= 'a' && s[i] <= 'z') ||
				(s[i] >= 'A' && s[i] <= 'Z'))
		{
			if ((s[i] >= 'a' && s[i] <= 'm') ||
					(s[i] >= 'A' && s[i] <= 'M'))
				s[i] += 13;
			else
				s[i] -= 13;
		}

	return (s);
}
