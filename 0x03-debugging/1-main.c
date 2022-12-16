#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: returns 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10)
	{
		_putchar(i);
		/* You have to include an increment here */
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
