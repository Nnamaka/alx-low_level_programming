#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * check - check if its num or not
 * @a: character string pointer
 * Return: returns true or false
*/
int check(char *a)
{
	int b = 0;

	for (; a[b]; b++)
		if (!(a[b] >= '0' && a[b] <= '9'))
			return (0);

	return (1);
}
/**
 * main - prints summation of positive numbers
 * @argc: number of args
 * @argv: args array
 * Return: returns 0 on success or 1 on failure
*/
int main(int argc, char *argv[])
{
	int i = 1, j = 0, k = 0;


	for (; argv[i]; i++)
	{
		if (!(check(argv[i])))
		{
			printf("Error\n");
			return (1);
		}

	}


	for (k = 1; k < argc; k++)
		j += atoi(argv[k]);

	printf("%d\n", j);

	return (0);
}
