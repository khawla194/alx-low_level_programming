#include "main.h"
/**
 * _puts - print string
 *
 * @str : string
 *
 * Return: None
 */
void _puts(char *str)
{
        while (*str != '\0')
        {
                _putchar(*str);
                str++;
        }
        _putchar('\n');
}
