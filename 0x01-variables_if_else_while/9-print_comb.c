#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar (i);
		putchar (44);
		putchar (32);
	}
	putchar ('\n');
	return (0);
}
