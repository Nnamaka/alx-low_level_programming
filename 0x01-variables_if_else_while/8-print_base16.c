#include <stdio.h>
/**
 * main - main function
 * Return: returns 0 on success
 */
int main(void)
{
	int a = 0;

	for (; a < 48; a++)
	{
		if (a < 10)
			putchar(a + '0');
		else if (a > 41)
			putchar(a - 10 + 'A');
	}

	putchar(10);

	return (0);
}
