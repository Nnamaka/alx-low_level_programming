#include <time.h>
#include <stdlib.h>
#include <stdlib.h>
/**
 * main - genrates a random valid password
 * Return: returns 0 on success
 */
int main(void)
{
	srand(time(NULL));

	int password;
	char hold;

	while (password <= 2772)
	{
		hold = rand() % 128;
		password *= hold;
		putchar(hold);
	}

	putchar(2772 - password);

	return (0);
}
