#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: all returns 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');

			if (i == 8 && j == 9)
				continue;

			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
