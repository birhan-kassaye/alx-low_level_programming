#include "main.h"

/**
 * puts2 - prints every other character of a string, starting from first cha
 *
 * Return: returns 0
 */

void puts2(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		_putchar(str[count]);
	}
	_putchar('\n');
}
