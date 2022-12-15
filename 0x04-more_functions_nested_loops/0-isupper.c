#include "main.h"

/**
 * _isupper - Write a function that checks for uppercase character
 * @c: a letter to be checked
 * Return: return 1 if c is uppercase, otherwise 0
 */

int _isupper(int c)
{
	if ((c >= 'A') || (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
