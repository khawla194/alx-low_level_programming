#include "main.h"
/**
 * print_diagonal - print diagonal
 *
 * @n : integer
 *
 * Return: none
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (n > 1)
			{
				for (j = 1; j <= i; j++)
				{
					_putchar(32);
				}
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
