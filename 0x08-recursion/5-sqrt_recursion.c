#include "main.h"
int _sqrt1(int n, int i);
/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n : integer
 *
 * Return: square root of a number.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt1(n, 0));
	}
}
#include "main.h"
/**
 * _sqrt1 - returns the natural square root of a number.
 *
 * @n : integer
 * @i : integer
 *
 * Return: square root of a number.
 */
int _sqrt1(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else
	{
		if (i * i > n)
		{
			return (-1);
		}
		else
		{
			return (_sqrt1(n, i + 1));
		}
}
}
