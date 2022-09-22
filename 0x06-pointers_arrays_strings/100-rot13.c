#include "main.h"
/**
 * rot13 - encode string with rot13
 * @s: char pointer argument
 * Return: char pointer of encoded string
 */
char *rot13(char *s)
{
	int i;

	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	char *strp = s;

	for (; *s; s++)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*s == rot13[i])
			{
				*s = ROT13[i];
				break;
			}
		}
	}
	return (strp);
}
