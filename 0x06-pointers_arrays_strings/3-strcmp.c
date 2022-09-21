#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: first character string argument
 * @s2: second character string argument
 * Return: returns an int value of the diffence of disimilar charactes
 */
int _strcmp(char *s1, char *s2)
{
	for (; (*s1 == *s2) && (*s1 && *s2); s1++, s2++)
		;

	return (*s1 - *s2);
}
