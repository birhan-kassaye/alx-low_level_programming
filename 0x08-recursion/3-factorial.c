#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 * @n: the number that we are going to find the factorial.
 * Return: returns 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
