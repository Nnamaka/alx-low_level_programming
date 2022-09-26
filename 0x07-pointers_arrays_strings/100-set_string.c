#include "main.h"
/**
 * set_string - sets the value of a pointer to char
 * @s: a pointer to a pointer
 * @to: pointer to character string
 * Return: returns nothing
*/
void set_string(char **s, char *to)
{
	*s = to;
}
