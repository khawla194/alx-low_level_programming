#include "main.h"
/**
 * _strcmp - compare strings
 *
 * @s1 : string
 *
 * @s2 : string
 *
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int l1 = 0;
	int l2 = 0;
	int i = 0;
	int j = 0;

	while (s1[l1] != '\0')
	{
		l1++;
	}
	while (s2[l2] != '\0')
	{
		l2++;
	}
	while (i < l1 && j < l2)
	{
		if (s1[i] == s2[j])
		{
			i++;
			j++;
		}
		else
			return (s1[i] - s2[j]);
	}
	if (i == l1 && j == l2)
		return (0);
	else
	{
		if (i != l1)
			return (-1);
		else
			return (1);
	}
}
