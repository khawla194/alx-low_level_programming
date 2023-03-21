#include "main.h"
/**
 * print_sign - Entry point
 *
 * @n : is integer
 *
 * Return: 0 1 or -1 (Success)
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		if (n > 0)
		{
			_putchar ('+');
			return (1);
		}
		else
		{
			_putchar ('-');
			return (-1);
		}
	}
}
