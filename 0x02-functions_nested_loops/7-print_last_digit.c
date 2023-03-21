#include "main.h"
/**
 * print_last_digit - Entry point
 *
 * @c : integer
 *
 * Return: a value (Success)
 */
int print_last_digit(int c)
{
int a;
if (c < 0)
{
	c = 0 - c;
}
a = c % 10;
_putchar(a + 48);
return (a);
}
