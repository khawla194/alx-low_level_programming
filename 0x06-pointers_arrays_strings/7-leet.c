#include "main.h"

/**
 * *leet - encodes a string into 1337
 *
 * @s : string
 *
 * Return: Always 0.
 */
char *leet(char *s)
{
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == s1[j])
			{
				s[i] = s2[j];
			}
		}
		i++;
	}
	return (s);
}
