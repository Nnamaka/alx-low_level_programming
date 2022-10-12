#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: pointer to character string of name
 * @f: f is a callback function argument
 * Return: returns nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
