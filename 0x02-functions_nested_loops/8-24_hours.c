#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * h = hour, m = minutes
 * Return: returns 0
 */
void jack_bauer(void)
{
	int h, m;

	h = 0;
	while (h < 24)
	{
		m = 0;
		while (m < 60)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');

			m++;
		}
		h++;
		putchar('\n');
	}
	return (0);
}

