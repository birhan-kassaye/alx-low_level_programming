#include <stdio.h>

/**
 * main - a program that finds and prints the largest prime factor
 *
 * Return: returns 0
 */

int main(void)
{
	long int n, div, largest_pf, a;

	div = 2;
	n = 612852475143;
	while (n != 0)
	{
		if (n % div != 0)
		{
			div++;
		}
		else
		{
			largest_pf = n;
			a = n / div;
			if (a == 1)
			{
				printf("%ld", largest_pf);
				break;
			}
		}
	}
	return (0);
}
