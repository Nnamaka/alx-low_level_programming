#include "main.h"
/**
 * _strstr - finds the first occurrence of a substring in another string
 * @haystack: string to search in
 * @needle: string to be searched for
 * Return: pointer to the beginning of the located substring
*/
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *src = haystack;
		char *sub = needle;

		while (*haystack && *sub && *haystack == *sub)
		{
			haystack++;
			sub++;
		}
		if (!*sub)
			return (src);
		haystack = src + 1;
	}
	return (0);
}
