#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 1; j < 10; j++)
		{
			if (j > i)
			{
			putchar (i + 48);
			putchar (j + 48);
			if (i != 8 || j != 9)
			{
			putchar (44);
			putchar (32);
			}
			}
		}
	}
	putchar ('\n');
	return (0);
}
