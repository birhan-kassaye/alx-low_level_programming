#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: all return 0 (Success)
 */
int main(void)
{
	int i;
	char bir[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 25; i >= 0; i--)
	{
		putchar(bir[i]);
	}
	putchar('\n');
	return (0);
}
