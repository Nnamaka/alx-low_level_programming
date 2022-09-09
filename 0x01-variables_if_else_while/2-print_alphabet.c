#include <stdio.h>
/**
 * main - Entry point
 * Return: returns a "0" after success
 */
int main(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}

	putchar(10);

	return (0);
}
