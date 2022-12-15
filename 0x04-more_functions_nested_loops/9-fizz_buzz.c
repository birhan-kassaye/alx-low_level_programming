#include <stdio.h>

/**
 * main - a program that prints the numbers from 1 to 100
 *
 * Return: return 0
 */

int main(void)
{
	int i;

	printf("%d", 1);
	i = 2;
	while (i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (i % 3 == 0)
		{
			printf(" Fizz");
		}
		else
		{
			printf(" %d", i);
		}
		i++;
	}
	printf("\n");
	return (0);
}
