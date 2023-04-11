#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str : pointer
 * Return: pointer
 */
char *_strdup(char *str)
{
	int i = 0;
	int j;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		while (str[i] != '\0')
			i++;
		p = malloc(sizeof(char) * i);
		for (j = 0; j < i; j++)
			*(p + j) = str[j];
		return (p);
	}
}
