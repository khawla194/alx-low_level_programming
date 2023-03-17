#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int alpha = 97;

	for (i = 0; i < 26; i++)
	{
		if (alpha == 101 || alpha == 113)
		{
			continue;
		}
		putchar (alpha);
		alpha++;
	}
	putchar ('\n');
	return (0);
}
