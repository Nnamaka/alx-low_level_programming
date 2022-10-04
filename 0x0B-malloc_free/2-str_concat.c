#include <stdlib.h>
/**
 * str_concat - Concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: returns a pointer to the concatenated string or NULL
*/
char *str_concat(char *s1, char *s2)
{
	int s1_len, s2_len, i, j;
	char *join_mem;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s1_len = 0, s2_len = 0;

	while (s1[s1_len] != '\0')
		s1_len++;

	while (s2[s2_len] != '\0')
		s2_len++;

	s2_len++;

	join_mem = malloc(sizeof(char) * (s1_len + s2_len));

	if (join_mem == NULL)
		return ('\0');

	i = 0, j = 0;

	while (i < s1_len)
	{
		join_mem[i] = s1[i];
		i++;
	}

	while (j < s2_len)
	{
		join_mem[i] = s2[j];
		j++;
		i++;
	}

	return (join_mem);
}
