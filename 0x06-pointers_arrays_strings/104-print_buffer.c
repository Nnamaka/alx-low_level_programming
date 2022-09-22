#include "main.h"
#include <stdio.h>
/**
 * print_buffer - Prints out the content of a buffer
 * @b: char pointer argument of the buffer
 * @size: size of the buffer
 */
void print_buffer(char *b, int size)
{
	int len, idx;

	for (len = 0; len < size; len += 10)
	{
		printf("%08x: ", len);

		for (idx = 0; idx < 10; idx++)
		{
			if ((idx + len) >= size)
				printf("  ");

			else
				printf("%02x", *(b + idx + len));

			if ((idx % 2) != 0 && idx != 0)
				printf(" ");
		}

		for (idx = 0; idx < 10; idx++)
		{
			if ((idx + len) >= size)
				break;

			else if (*(b + idx + len) >= 31 &&
				 *(b + idx + len) <= 126)
				printf("%c", *(b + idx + len));

			else
				printf(".");
		}

		if (len >= size)
			continue;

		printf("\n");
	}

	if (size <= 0)
		printf("\n");
}
