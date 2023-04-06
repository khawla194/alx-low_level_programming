#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 *
 * @s : string
 *
 * @accept : string
 *
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
        unsigned int cmp = 0;
        int i = 0;
        int j;

        while (s[i] != '\0')
        {
                for (j = 0; accept[j] != '\0'; j++)
                {
                        if (s[i] == accept[j])
                        {
                                cmp++;
                                break;
                        }
                        else if (accept[j + 1] == '\0')
                        {
                                return (cmp);
                        }

                }
                i++;
        }
        return (cmp);
}
