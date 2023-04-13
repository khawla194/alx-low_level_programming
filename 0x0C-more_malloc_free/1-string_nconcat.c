#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - concatenates two strings.
 * @s1 : string
 * @s2 : string
 * @n : unsigned int
 *
 * Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1 = 0;
	unsigned int l2 = 0;
	unsigned int i;
	unsigned int j = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
		l1++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		l2++;
	}
	if (n < l2)
		l2 = n;
	p = malloc((l1 + l2 + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < l1)
	{
		p[i] = s1[i];
		i++;
	}
	while (n < l2 && i < l1 + n)
	{
		p[i++] = s2[j++];
	}
	while (n >= l2 && i < (l1 + l2))
	{
	p[i++] = s2[j++];
	}
	p[i] = '\0';
	return (p);
}
