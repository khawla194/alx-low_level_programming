#include "main.h"
/**
 * _abs - Entry point
 *
 * @c : is integer
 *
 * Return: Always 0 (Success)
 */
int _abs(int c)
{
	if (c >= 0)
	{
		return (c);
	}
	else
	{
		return (0 - c);
	}
}
