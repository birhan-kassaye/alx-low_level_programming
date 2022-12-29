#include "main.h"

/**
 * print_number - a function that prints an integer
 *
 * Return: no return
 */

void print_number(int n)
{
	unsigned int c;

	c = n;
	if (n < 0)
	{
		n *= -1;
		c = n;
		_putchar('-');
	}
	c /= 10;
	if (c != 0)
	{
		print_number(c);
	}
	_putchar(n % 10 + '0');
}
