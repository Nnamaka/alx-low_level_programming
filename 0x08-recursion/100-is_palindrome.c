#include "main.h"
/**
 * _len - find length of string
 * @s: char pointer argument
 * Return: returns length of string
*/
int _len(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += _len(s + 1) + 1;
	return (n);
}
/**
 * check_palin - checks if string is palindrome
 * @s: string
 * @begin: begining of string
 * @end: end of string
 * @div: length of string divided
 * Return: returns 1 if true else 0
*/
int check_palin(char *s, int begin, int end, int div)
{
	if ((begin == end && div != 0) || (begin == end + 1 && div == 0)
		return (1);
	if (s[begin] != s[end])
		return  (0);
	return (check_palin(s, begin + 1, end - 1, div));
}
/**
 * is_palindrome - confirms that string if a palindrome
 * @s: char pointer to character string
 * Return: returns 0 if not palindrome else 1 if palindrome
*/
int is_palindrome(char *s)
{
	int end = _len(s);

	return (check_palin(s, 0, end - 1, end % 2));
}
