include "main.h"

/**
 * print_triangle - a function that prints a triangle
 * @size: the size of the triangle
 * Return: returns 0
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= (size - i); j++)
		{
			_putchar(' ');
		}
		for (j--; j <= size; j++)
		{
			_putchar(35);
		}
		if (i <= size)
		{
			_putchar('\n');
		}
	}
	_putchar('\n')
}
