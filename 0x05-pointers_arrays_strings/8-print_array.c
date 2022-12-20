#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array of integers
 * @a: the array name
 * @n: number of the elements of the array
 * Return: no return
 */

void print_array(int *a, int n)
{
	int i;

	printf("%d, ", a[0]);
	for (i = 1; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
