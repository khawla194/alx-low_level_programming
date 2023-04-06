#include "main.h"
/**
 * _atoi -  convert a string to an integer
 *
 * @s : string
 *
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int l = 0;
	int i;
	int n = 0;
	int c;

	while (s[l] != '\0')
	{
		l++;
	}
	l--;
	for (i = 0; i < l; i++)
	{
		c = l - i;
		switch (s[i])
		{
			case '0':
				n = n + (0 * (10 ^ c));
			case '1':
				n = n + (1 * (10 ^ c));
			case '2':
				n = n + (2 * (10 ^ c));
			case '3':
				n = n + (3 * (10 ^ c));
			case '4':
				n = n + (4 * (10 ^ c));
			case '5':
				n = n + (5 * (10 ^ c));
			case '6':
				n = n + (6 * (10 ^ c));
			case '7':
				n = n + (7 * (10 ^ c));
			case '8':
				n = n + (8 * (10 ^ c));
			case '9':
				n = n + (9 * (10 ^ c));
			default:
				break;
		}
	}
	return (n);
}
