#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(i+97);
	}
	_putchar('\n');
}
int maint (void)
{
	print_alphabet();
	return (0);
}
