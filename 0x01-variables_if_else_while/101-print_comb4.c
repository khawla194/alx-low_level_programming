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
	int k;

	for (i = 0; i < 8; i++)
	{
		for (j = 1; j < 9; j++)
		{
			for (k = 2; k < 10; k++)
			{
			if (j > i && k > j)
			{
				putchar (i + 48);
				putchar (j + 48);
				putchar (k + 48);
				if (i != 7 && j != 8 && k != 9)
				{
					putchar (44);
					putchar (32);
				}
			}
			}
		}
	}
putchar ('\n');
return (0);
}
