#include "main.h"

/**
 * _islower - Write a function that checks for lowercase character.
 * @c: our character
 * Return: returns 1 if c is lower, otherwise returns 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

