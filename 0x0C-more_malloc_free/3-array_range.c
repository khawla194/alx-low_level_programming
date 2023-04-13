#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min : integer
 * @max: integer
 *
 * Return: int
 */
int *array_range(int min, int max)
{
	int i;
	int *p;
	int l;

	if (max < min)
	{
		return (NULL);
	}
	l = max - min + 1;
	p = malloc(l * sizeof(int));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < l)
	{
		p[i] = min++;
		i++;
	}
	return (p);
}
