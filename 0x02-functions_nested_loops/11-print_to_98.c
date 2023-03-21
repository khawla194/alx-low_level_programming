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
			b = n - i;
			printf("%d", b);
			if (i != a - 1)
			{
				printf(",");
				printf(" ");
			}
		}
	}
	else
	{
		a = 98 - n + 1;
		for (i = 0; i < a; i++)
		{
			b = n + i;
			printf("%d", b);
			if (i != a - 1)
			{
				printf(",");
				printf(" ");
			}
		}
	}
}
