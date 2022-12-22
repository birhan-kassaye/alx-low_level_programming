#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: returns substraction result
 */

int _strcmp(char *s1, char *s2)
{
	int i, res;

	i = 0;
	res = 0;
	while (res == 0)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			break;
		res = s1[i] - s2[i];
		i++;
	}
	return (res);
}
