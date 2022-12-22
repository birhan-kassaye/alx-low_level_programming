#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 *
 * Return: 
 */

void reverse_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		int temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
		i++;
	}
}
