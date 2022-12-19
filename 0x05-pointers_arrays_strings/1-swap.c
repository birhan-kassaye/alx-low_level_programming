#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 *
 * Return: returns 0
 */

void swap_int(int *a, int *b)
{
	int num = *a;
	*a = *b;
	*b = num;

}
