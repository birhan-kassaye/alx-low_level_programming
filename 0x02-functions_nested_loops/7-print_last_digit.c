#include "main.h"

/**
 * print_last_digit - Write a function that prints the last digit of a number
 * @n: numbers
 * @l: last digit
 * Return: returns 0
 */
int print_last_digit(int n, int l)
{
	l = n % 10;

	if (l < 0)
		l = -1;

	_putchar(l + '0');

	return (0);
}



