#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Entry point
 *
 * @n : integer
 *
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	int a;
	int b;
	int i;

	if (n > 98)
	{
		a = n - 98 + 1;
		for (i = 0; i < a; i++)
		{
			b = n + i;
			_putchar(b / 10 + 48);
			_putchar(b % 10 + 48);
			if (i != a - 1)
			{
				_putchar(44);
				_putchar(32);
			}
		}
	}
	else
	{
		a = 98 - n + 1;
		for (i = 0; i < a; i++)
		{
			b = n + i;
			if(b > 9)
			{

				_putchar(b / 10 + 48);
				_putchar(b % 10 + 48);
			}
			else
			{
				_putchar(b);
			}
			if (i != a-1)
			{
				_putchar(44);
				_putchar(32);
			}
		}
	}
}
