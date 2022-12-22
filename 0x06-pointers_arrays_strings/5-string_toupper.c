#include "main.h"

/**
 * *string_toupper
 *
 */

char *string_toupper(char *s)
{
	int count;

	count = 0;
	while (s[count] != '\0')
	{
		if (s[count] >= 97 && s[count] <= 122)
		{
			s[count] = s[count] - 32;
		}
		count++;
	}
}
