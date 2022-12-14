#include <stdio.h>

/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024 (excluded)
 *
 * Return: all returns 0 (Success)
 */
int main(void)
{
	int i, n;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			n += i;
		}
	}
	printf("%d\n", n);
	return (0);
}

