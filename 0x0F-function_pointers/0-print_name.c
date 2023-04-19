#include <stdio.h>
/**
 * print_name -  function that prints a name.
 * @f : function
 * @name : char
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
