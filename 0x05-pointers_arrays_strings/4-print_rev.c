#include "main.h"
/**
 * print_rev - prints a string, in reverse
 *
 * @s : string
 *
 * Return: None
 */
void print_rev(char *s)
{
	int l;
	int i;

	l = 0;
	while (*s != '\0')
	{
		l++;
		s++;
	}
	s--;
	for (i = 0; i < l; i++)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
