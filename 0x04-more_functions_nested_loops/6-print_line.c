#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 * @n: the number of times of our straight line
 * Return: returns 0
 */
void print_line(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
