#include "main.h"

/**
 * print_number - a function that prints an integer
 * @n:
 *
 */

void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	if ((n / 10) > 0)
	{
		print_number(n / 10);
		putchar((n % 10) + '0');
	}
}
