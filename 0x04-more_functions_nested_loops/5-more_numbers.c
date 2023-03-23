#include "main.h"
/**
 * more_numbers - function that prints 10 times the numbers 0-14
 *
 * Return: none
 */
void more_numbers(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar(j + 48);
			if (j == 9)
			{
				for (k = 0; k < 5; k++)
				{
				_putchar('1');
				_putchar(k + 48);
				}
			}
		}
		_putchar('\n');
	}
}
