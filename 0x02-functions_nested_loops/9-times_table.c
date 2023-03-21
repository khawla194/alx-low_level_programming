#include "main.h"
/**
 * times_table - Entry point
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int i;
	int j;
	int p;
	int a;
	int b;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			p = i * j;
			a = p / 10;
			b = p % 10;
			if (p <= 9)
			{
				_putchar (p + 48);
				if (j < 9)
				{
					_putchar(',');
					_putchar (32);
					_putchar (32);
				}
			}
			else
			{
				_putchar(a + 48);
				_putchar(b + 48);
				if (j < 9)
				{
					_putchar(',');
					_putchar (32);
				}
			}
		}
		_putchar('\n');
	}
}

