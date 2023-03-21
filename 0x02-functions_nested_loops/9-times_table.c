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
			_putchar(a + 48);
			_putchar(b+48);
			_putchar(',');
			_putchar('.');
		}
		_putchar('$');
		_putchar('\n');
	}
}

