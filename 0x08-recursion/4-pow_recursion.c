#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 *
 * @x : integer
 *
 * @y : integer
 *
 * Return: Always result.
 */
int _pow_recursion(int x, int y)
{
	int res = 0;

	if (y < 0)
	{
		return (-1);
	}
	else
	{
		if (y == 0)
		{
			return (1);
		}
		else
		{
			y--;
			res = x * _pow_recursion(x, y);
			return (res);
		}
	}
}
