#include "main.h"

/**
 * create_array - a function that creates an array of chars,
 *  and initializes it with a specific char.
 * @c: the storaged char
 * @size: the size of the array
 *  Return: returns a pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *cr;

	if (size == 0)
	{
		return (NULL);
	}
	cr = malloc(sizeof(c) * size);
	if (cr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		cr[i] = c;
	}
	return (cr);
}

