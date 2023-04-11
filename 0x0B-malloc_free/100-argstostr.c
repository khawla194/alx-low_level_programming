#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments
 *
 * @ac : integer
 * @av : char
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	int i = 0;
	int j;
	char *p;
	int l = 0;
	int k = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			l++;
		}
	}
	l = l + 3;
	p = malloc(sizeof(char) * l + 1);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			p[k] = av[i][j];
			k++;
		}
		if (av[i][j] == '\0')
		{
			p[k] = '\n';
			k++;
		}
	}
	return (p);
}
