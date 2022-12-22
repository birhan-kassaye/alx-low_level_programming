#include "main.h"

/**
 * *string_toupper - a function changes lowercase letters to uppercase
 * @s: the string
 * Return: the pointer
 */

char *string_toupper(char *s)
{
	int count;

	count = 0;
	while (*(s + count) != '\0')
	{
		if ((*(s + count) >= 97) && (*(s + count) <= 122))
		{
			*(s + count) = *(s + count) - 32;
		}
		count++;
	}
	return (s);
}
