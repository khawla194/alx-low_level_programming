#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int i;
	int j;
	int p;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			p = i * j;
			_putchar(p + 48);
			_putchar(',');
			_putchar('.');
		}
		_putchar('$');
		_putchar('\n');
	}
}

