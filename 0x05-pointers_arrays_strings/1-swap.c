#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @a: the first number
 * @b: the second number
 * Return: returns 0
 */

void swap_int(int *a, int *b)
{
	int num = *a;
	*a = *b;
	*b = num;

}
