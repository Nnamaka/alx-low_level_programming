#include "main.h"
/**
 * times_table - nine times tabel
 * Return: returns nothing
 */
void times_table(void)
{
	int hz, vt, mul;


	for (hz = 0; hz <= 9; hz++)
	{
		_putchar('0');
		for (vt = 1; vt <= 9; vt++)
		{
			_putchar(',');
			_putchar(' ');

			mul = hz * vt;

			if (mul <= 9)
				_putchar(' ');
			else
				_putchar((mul / 10) + '0');

			_putchar((mul % 10) + '0');
		}
		_putchar('\n');
	}
}
