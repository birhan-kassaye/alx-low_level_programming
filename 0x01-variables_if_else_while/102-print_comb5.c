#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: all returns 0 (Success)
 */
int main(void)
{
	int i, j;

	i = 0;
	j = 0;

	while (i <= 98)
	{
		j = 0;
		while (j <= 99)
		{
			if (i != j && i < j)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				if (i == 98 && j == 99)
					break;
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
