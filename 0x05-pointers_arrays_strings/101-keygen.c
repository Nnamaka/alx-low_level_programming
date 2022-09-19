#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - genrates a random valid password
 * Return: returns 0 on success
 */
int main(void)
{
	int password;
	char hold;

	srand(time(NULL));

	while (password <= 2772)
	{
		hold = rand() % 128;
		password *= hold;
		putchar(hold);
	}

	putchar(2772 - password);

	return (0);
}
