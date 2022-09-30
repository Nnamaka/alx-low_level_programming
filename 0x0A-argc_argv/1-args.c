#include <stdio.h>
/**
 * main - print number of argument
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: returns 0 for success else a non-negative value
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%i", argc - 1);
	printf("\n");

	return (0);
}
