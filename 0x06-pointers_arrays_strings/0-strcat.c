#include "main.h"

/**
 * *_strcat - a function that concatenates two strings
 * @dest: the destination
 * @src: the source
 * Return: returns dest
 */

char *_strcat(char *dest, char *src)
{
	int count_1 = 0, count_2 = 0;

	while (*(dest + count_1) != '\0')
	{
		count_1++;
	}
	while (count_2 >= 0)
	{
		*(dest + count_1) = *(src + count_2);
		if (*(src + count_2) == '\0')
		{
			break;
		}
		count_1++;
		count_2++;
	}
	return (dest);
}
