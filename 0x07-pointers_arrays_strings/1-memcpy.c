#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: the destination of the memory area
 * @src: the source of the memory area
 * @n: the bytes to be filled
 * Return: returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
