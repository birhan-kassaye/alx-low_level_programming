#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: the number of times of the diagonal is printed
 * Return: NO return
 */

void print_diagonal(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		_putchar('\');
		_putchar('\n ');
		i++;
	}
	_putchar('\n');
}
