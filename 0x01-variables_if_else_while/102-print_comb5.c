#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int c, j, k, i;

	for (c = 0; c <= 9; c++)
	{
		for (i = 0; i <= 9; i++)
		{
			for (k = 0; k <= 9; k++)
			{
				for (j = 0; j <= 9; j++)
				{
					if (((k + j) > (c + i) &&  k >= c) || c < k)
					{
						putchar(c + '0');
						putchar(i + '0');
						putchar(' ');
						putchar(k + '0');
						putchar(j + '0');
					if ((c + i + k + j) == 35 && i == 8)
					{
						break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
