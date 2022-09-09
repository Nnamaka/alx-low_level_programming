#include <stdio.h>
/**
 * main - print letters except 'q' and 'e'
 * Return: returns 0 if successful
 */
int main(void)
{
	int a;

	for (a = 97; a < 123; a++)
	{
		if (a == 101 || a == 113)
			continue;
		putchar(a);
	}
	putchar(10);
	return (0);
}
