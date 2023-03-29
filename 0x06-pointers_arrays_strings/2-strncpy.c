#include "main.h"
/**
 * *_strncpy - copy string
 *
 * @dest : string
 *
 * @src : string
 *
 * @n : integer
 *
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (j < n)
	{
		if (src[j] != '\0')
		{
			dest[j] = src[j];
			j++;
		}
		else
		{
			dest[j] = '\0';
			j++;
		}
	}
	return (dest);
}
