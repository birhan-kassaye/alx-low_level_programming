#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Return: all returns 0 (Success)
 */
int main(void)
{
	int i, j, k;

	i = 0;
	j = 0;
	k = 0;
	while(i < 8)
	{
		j = 0;
		while(j < 9)
		{
			k = 0;
			while(k < 10)
			{
				if (i != j && j != k && i != k && i < j && j < k) 
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (i == 7 && j == 8 && k ==9)
						break;
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}



