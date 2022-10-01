#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints number of coins to make change.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 1 on success else 0
*/
int main(int argc, char *argv[])
{
	int r = 0, amt, cent;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amt = atoi(argv[1]);

	if (amt < 0)
	{
		printf("0\n");
		return (0);
	}

	while (amt)
	{
		if (amt >= 25)
			cent = 25;
		else if (amt >= 10)
			cent = 10;
		else if (amt >= 5)
			cent = 5;
		else if (amt >= 2)
			cent = 2;
		else
			cent = 1;

		r += amt / cent;
		amt %= cent;
	}

	printf("%d\n", r);
	return (0);
}
