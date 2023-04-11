#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes it with char
 * @size : size
 * @c : char
 *
 * Return: return a pointer
 */
char *create_array(unsigned int size, char c)
{
	char *p;

	p = malloc(sizeof(char) * size);
	if (size == 0 || p == NULL)
	{
		return (NULL);
	}
	else
	{
		while (*p != '\0')
		{
			*p = c;
			p++;
		}
		return (p);
	}
}
