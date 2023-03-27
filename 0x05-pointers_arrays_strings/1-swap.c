#include "main.h"
/**
 * swap_int - swape integer
 *
 * @a : int
 *
 * @b : int
 *
 * Return: None.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}
