#include "main.h"

/**
 * puts2 - prints every other character of a string, starting from first cha
 * @str: string
 * Return: returns 0
 */

void puts2(char *str)
{
	int count;

	count = 0;
	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (str[count] % 2 == 0)
		{
			_putchar(str[count]);
		}
		count++;
	}
}
