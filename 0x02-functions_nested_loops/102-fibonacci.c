#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: returns 0 (Success)
 */
int main(void)
{
	int n, a, b, c;

	a = 1;
	b = 2;
	printf("%d, %d", a, b);
	for (c = 1; c <= 49; c++)
	{
		n = a + b;
		printf(", %d", n);
		a = b;
		b = n;
	}
	printf("\n");
	return (0);
}
