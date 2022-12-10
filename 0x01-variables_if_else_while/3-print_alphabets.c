#include <stdio.h>

/**
 * main - alphabet in lowercase, and then in uppercase, followed by a new line
 *
 * Return: all return 0 (Success)
 */
int main(void)
{
	int i;
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	char bir[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	for (i = 0; i < 26; i++)
	{
		putchar(bir[i]);
	}
	putchar('\n');
	return (0);
}
