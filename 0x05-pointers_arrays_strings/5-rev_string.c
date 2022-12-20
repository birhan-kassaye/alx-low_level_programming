#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: string
 * Return: returns 0
 */

void rev_string(char *s)
{
	int count = 0;

	while (count >= 0)
	{
		if (s[count] == '\0')
		{
			break;
		}
		count++;
	}
	for (count--; count >= 0; count--)
	{
		_putchar(s[count]);
	}
}
