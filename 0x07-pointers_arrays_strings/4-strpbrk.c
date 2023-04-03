#include "main.h"
/**
 * *_strpbrk -  a function that searches a string for any of a set of bytes.
 *
 * @s : char
 *
 * @accept : char
 *
 * Return: Always char.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (*s)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
