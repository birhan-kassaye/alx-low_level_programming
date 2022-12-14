#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers
 *
 * Return: all returns 0 (Success)
 */
int main(void)
{
	int i;
	long int n1, n2, fn;

	n1 = 1;
	n2 = 2;
	fn = 0;
	printf("%ld, %ld", n1, n2);
	for (i = 1; i < 96; i++)
	{
		fn = n1 + n2;
		printf(", %ld", fn);
		n1 = n2;
		n2 = fn;
	}
	return (0);
}
