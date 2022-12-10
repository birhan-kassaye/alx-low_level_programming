#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: all return 0 (Success)
 */
int main(void)
{
	int i;
	char bir[24] = "abcdfghijklmnoprstuvwxyz";

	for (i = 0; i < 24; i++)
	{
		putchar(bir[i]);
	}
	putchar('\n');
	return (0);
}
