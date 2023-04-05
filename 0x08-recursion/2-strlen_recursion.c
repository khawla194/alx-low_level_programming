#include "main.h"

/**
 * _strlen_recursion -  returns the length of a string.
 *
 * @s : string
 *
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s != '\0')
	{
		l++;
		s++;
		l = l + _strlen_recursion(s);
	}
	return (l);
}
