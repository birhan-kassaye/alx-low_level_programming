#include "main.h"

/**
 * print_square -  a function that prints a square
 * @size: the size of the square
 * Return: returns 0
 */

void print_square(int size)
{
	int i, j;

	i = 0;
	while (i < n)
	{
		j = 1;
		while (j <= i)
		{
			_putchar(35);
			j++;
		}
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
