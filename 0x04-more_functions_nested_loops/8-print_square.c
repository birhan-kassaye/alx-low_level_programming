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
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar(35);
			j++;
		}
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
