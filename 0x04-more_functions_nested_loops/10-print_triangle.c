include "main.h"

/**
 * print_triangle - a function that prints a triangle
 * @size: the size of the triangle
 * Return: returns 0
 */

void print_triangle(int size)
{
	int i, space, j;

	for (i = 1; i <= size; i++)
	{
		for (space = 1; space <= size - i; space++)
		{
			_putchar(' ');
		}
		for (j--; j <= i; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	_putchar('\n')
}
