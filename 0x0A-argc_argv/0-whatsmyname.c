#include <stdio.h>
/**
 * main - a program that prints its name
 * @argc: number of command line arguments
 * @argv: array of pointers to string values
 * Return: returns 0 for success another number for failure
*/
int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}

