#include "main.h"
int _prime(int n, int i);
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 *
 * @n : integer
 *
 * Return: 1 or 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (_prime(n, n - 1));
	}
}
#include "main.h"
/**
 * _prime - returns 1 if the input integer is a prime number
 *
 * @n : integer
 * @i : integer
 *
 * Return: 1 or 0.
 */
int _prime(int n, int i)
{
	int j;

	if (n % i == 0 && i > 1)
	{
		j = 0;
	}
	else
	{
		if (i == 1)
		{
			j = 1;
		}
		else
		{
			j = _prime(n, i - 1);
		}
	}
	return (j);
}
