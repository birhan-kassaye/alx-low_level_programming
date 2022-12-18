include "main.h"

/**
 * print_triangle - a function that prints a triangle
 * @size: the size of the triangle
 * Return: returns 0
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = i; j < size; j++)
		{
			_putchar(' ');
			_putchar(' ');
		}
		for (j = 0; j <= i; j++)
		{
			_putchar(35);
			_putchar(' ');
		}
		_putchar('\n');
	}
	_putchar('\n')
}
