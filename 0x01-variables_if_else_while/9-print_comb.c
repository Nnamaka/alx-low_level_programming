#include <stdio.h>
/**
 * main - main function
 * Return: returns 0 on success
 */
int main(void)
{
	int a = 48;

	for (; a < 58; a++)
	{
		putchar(a);

		if (a == 57)
			continue;

		putchar(44);
		putchar(32);
	}

	putchar(10);

	return (0);
}
