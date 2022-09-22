#include "main.h"
#include <stdio.h>
/**
 * print_buffer - Prints out the content of a buffer
 * @b: char pointer argument of the buffer
 * @size: size of the buffer
 */
void print_buffer(char *b, int size)
{
	int i, j, k, l, chr;

	if (size > 0)
	{
		for (i = 0; i < size; i += 10)
		{
			j = size - i < 10 ? size - i : 10;
			printf("%08x: ", i);

			for (k = 0; k < 10; k++)
			{
				if (k < j)
					printf("%02x", *(b + i + k));
				else
					printf(" ");
				if (k % 2)
					printf(" ");
			}
			for (l = 0; l < j; l++)
			{
				chr = *(b + l + i);

				if (!(chr >= 32 && chr <= 126))
					chr = 46;
				printf("%c", chr);
			}

			printf("\n");
		}
	}
	else
	printf("\n");
}
