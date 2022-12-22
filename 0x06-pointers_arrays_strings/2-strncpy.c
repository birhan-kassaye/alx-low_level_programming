#include "main.h"

/**
 * *_strncpy - a function that copies a string
 * @dest: the destination of the file
 * @src: the source of the file
 * @n: the number of bytes used from the source
 * Return: returns a pointer to the destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

