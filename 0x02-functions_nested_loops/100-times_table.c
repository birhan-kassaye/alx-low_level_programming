#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the number
 * Return: returns 0
 */
void print_times_table(int n)
{
	int r, c, d;

	if (n >= 0 && n <= 15)
	{
		for (r = 0; r <= n; r++)
		{
			_putchar('0');
			for (c = 1; c <= n; c++)
			{
				d = r * c;
				_putchar(',');
				_putchar(' ');
				if (d <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(d + '0');
				}
				else if (d <= 99)
				{
					_putchar(' ');
					_putchar((d / 10) + '0');
					_putchar((d % 10) + '0');
				}
				else
				{
					_putchar(((d / 100) % 10) + 48);
					_putchar(((d / 10) % 10) + 48);
					_putchar((d % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
