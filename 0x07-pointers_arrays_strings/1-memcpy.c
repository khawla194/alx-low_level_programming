#include "main.h"
/**
 * *_memcpy -  a function that copies memory area.
 *
 * @dest : char destination
 *
 * @src : char source
 *
 * @n : integer
 *
 * Return: Always 0.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	return (dest);
}
