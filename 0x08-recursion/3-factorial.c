#include "main.h"

/**
 *
 *
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		n = n * factorial(n);
		return (n);
	}
}
