#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: returns 0 (Success)
 */
int main(void)
{
	int c;

	int long a, b, n;

	a = 1;
	b = 2;
	printf("%ld, %ld", a, b);
	for (c = 0; c < 48; c++)
	{
		n = a + b;
		printf(", %ld", n);
		a = b;
		b = n;
	}
	printf("\n");
	return (0);
}
