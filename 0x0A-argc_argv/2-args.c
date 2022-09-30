#include <stdio.h>
/**
 * main - prints arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: return 0 for success else non-negative
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	int i = 0;

	while (argv[i])
{
		printf("%s\n", argv[i]);
}
}
