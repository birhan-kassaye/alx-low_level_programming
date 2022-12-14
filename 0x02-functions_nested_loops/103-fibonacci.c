#include <stdio.h>

/**
 * main - a program that finds and prints the sum of the even-valued terms
 *
 * Return: all returns 0 (Success)
 */
int main(void)
{
	long int n1, n2, Tn, En;

	n1 = 0;
	n2 = 0;
	Tn = En = 0;
	while (Tn <= 4000000)
	{
		Tn = n1 + n2;
		n1 = n2;
		n2 = Tn;
		if ((n1 % 2) == 0)
		{
			En += n1;
		}
	}
	printf("%ld\n", En);
	return (0);
}
