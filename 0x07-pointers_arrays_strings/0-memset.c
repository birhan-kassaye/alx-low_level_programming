#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: bytes to be filled
 * Return: returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (start);
}
