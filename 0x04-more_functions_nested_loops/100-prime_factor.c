#include <stdio.h>
/**
 * main - finds and prints the largest prime factor of 612852475143
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int d;
	long int i;
	int r = 0;

	for (d = 612852475143; d >= 1; d--)
	{
		if (612852475143 % d == 0)
		{
			for (i = d; i >= 1; i--)
			{
				if (d % i == 0)
				{
					r++;
				}
			}
			if (r == 2)
			{
				printf("The largest prime factor of 612852475143 is %ld \n", d);
			}
		}
	}
	return (0);
}
