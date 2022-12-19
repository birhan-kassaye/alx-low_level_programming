#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: string
 * Return: returns 0
 */

int _strlen(char *s)
{
	int count;

	count = 0;
	while (*(s + count) != '\0')
	{
		count++;
	}
	return (count);
}
