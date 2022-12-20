#include "main.h"

/**
 * *_strcpy - a function that copies the string pointed to by src
 * @src: our source
 * @dest: our destimation
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int count;

	count = 0;
	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
		{
			break;
		}
		count++;
	}
	return (dest);
}
