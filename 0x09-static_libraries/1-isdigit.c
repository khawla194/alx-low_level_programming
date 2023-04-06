#include "main.h"
#include <stdio.h>
/**
 * _isdigit - function that checks for a digit (0 through 9).
 *
 * @c : integer
 *
 * Return: Always 0 or 1 (Success)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
