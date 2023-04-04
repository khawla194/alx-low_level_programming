#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 *
 * @a : integer
 *
 * @size : integer
 *
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		sum2 = sum2 + a[i * size + (size - 1 - i)];
	}
	printf("%d, %d \n", sum1, sum2);
}
