#include <stdio.h>
/**
 * print_name - prints the name of the program
 * @s - pointer to character string to be printed
 * Return: returns nothing
*/
void print_name(char *s)
{
	int i = 0;

	while (*s++)
		i++;

	while (i--)
	{
		if (s[i] == '/' || s[i] == '\\')
			break;
	}

	while (s[i])
	{
		printf("%c",s[i]);
		i++;
	}

	printf("\n");
}
/**
 * main - a program that prints its name
 * @argc: number of command line arguments
 * @argv: array of pointers to string values
 * Return: returns 0 for success another number for failure
*/
int main ( int __attribute__((unused)) argc, char *argv[])
{
	print_name(argv[0]);
}

