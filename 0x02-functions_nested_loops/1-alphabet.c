include "main.h"

/**
 * print_alphabet - Write a function that prints the alphabet, in lowercase
 *
 * Return: all return 0 (Success)
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
