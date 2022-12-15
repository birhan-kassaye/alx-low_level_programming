#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: the number of times of the diagonal is printed
 * Return: NO return
 */

void print_diagonal(int n)
{
	int i, j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar(92);
		if (i < (n - 1))
		{
			_putchar('\n');
		}
		i++;
	}
	_putchar('\n');
}
