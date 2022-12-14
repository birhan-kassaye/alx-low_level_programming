#include <stdio.h>

/**
 * main - a program that finds and prints the sum of the even-valued terms
 *
 * Return: all returns 0 (Success)
 */
int main(void)
{
	long int n1, n2, nt, en;

	n1 = 1;
	n2 = 2;
	nt = en = 0;
	while (nt <= 4000000)
	{
		nt = n1 + n2;
		n1 = n2;
		n2 = nt;
		if ((n1 % 2) == 0)
		{
			en += n1;
		}
	}
	printf("%ld\n", en);
	return (0);
}
