#include "main.h"
/**
 * check_p - check if its a prime number or not
 * @a: integer argument
 * @b: integer argument
 * Return: returns an integer 1 on success else 0
*/
int check_p(int a, int b)
{
	if (b % a == 0 || a < 2)
		return (0);
	if (a > b / 2)
		return (1);
	return (check_p(a + 1, b));
}

/**
 * is_prime_number - confirms if a number is prime or not
 * @n: integer argument
 * Return: returns an integer 0 if is not a prime else 1
*/
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	if (n == 1 || n < 0)
		return (0);
	return (check_p(2, n));
}
