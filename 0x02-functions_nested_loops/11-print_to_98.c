#include "main.h"
/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: start to print from
 * Return: returns nothing
 */
void print_to_98(int n)
{
	while (n > 98)
		printf("%d, ", n--);

	if (n < 98)
		while (n < 98)
			printf("%d, ", n++);

	printf("%d\n", n);
}
