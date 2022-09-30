#include <stdio.h>
/**
 * main - multipy two numbers
 * @argc: number of args
 * @argv: array of args
 * Return: return 0 on success else 1
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc <= 2)
		printf("Error\n");
	else
	{
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	}

	return (0);
}
