#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function that concatenates two strings
 *
 * @s1 : string
 * @s2 : string
 * Return: pointer
*/
char *str_concat(char *s1, char *s2)
{
	int i1 = 0;
	int i2 = 0;
	int i;
	char *p;

	while (s1[i1] != '\0')
		i1++;
	while (s2[i2] != '\0')
		i2++;
	p = malloc((i1 + i2 + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < i1; i++)
		{
			p[i] = s1[i];
		}
		for (i = 0; i < i2; i++)
		{
			p[i + i1] = s2[i];
		}
		return (p);
	}
}

