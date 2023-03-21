#include "main.h"
/**
 * print_alphabet - print alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(i + 97);
	}
	_putchar('\n');
}
/**
 * main - print alphabet
 *
 * Return: Always 0 (Success)
 */
int maint (void)
{
	print_alphabet();
	return (0);
}
