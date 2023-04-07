#include "main.h"
#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 * @argc : agrument counter
 * @argv : argument vector
 *
 * Return: always 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
