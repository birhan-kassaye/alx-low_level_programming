#include "main.h"

/**
 * *_strncat - a function that concatenates two strings
 * @dest: file destination
 * @src: file source
 * @n: the amount of bytes used from the source
 * Return: returns a pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int count_1 = 0, count_2;

	while (*(dest + count_1) != '\0')
	{
		count_1++;
	}
	count_2 = 0;
	while (count_2 < n)
	{
		*(dest + count_1) = *(src + count_2);
		if (*(src + count_2) == '\0')
			break;
		count_2++;
		count_1++;
	}
	return (dest);
}
