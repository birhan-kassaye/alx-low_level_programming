#include "main.h"

/**
 * _atoi - a function that convert a string to an integer
 * @s: the input string
 * Return: returns 0
 */

int _atoi(char *s)
{
	unsigned int res, sign, i, len, m, count;

	res = 0;
	sign = 1;
	len = 0;
	m = 1;
	count = 0;

	while (s[count] != '\0')
	{
		if ((len > 0) && ((s[count] < '0') || (s[count] > '9')))
		{
			break;
		}
		if (s[count] == '-')
		{
			sign *= -1;
		}
		if (s[count] >= '0' && s[count] <= '9')
		{
			if (len > 0)
			{
				m *= 10;
			}
			len++;
		}
		count++;
	}
	for (i = count - len; i < count; i++)
	{
		res = res + ((s[i] - '0') * m);
		m /= 10;
	}
	return (sign * res);
}

