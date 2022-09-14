#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, j, z;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			for (z = j + 1; z <= 9; z++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(z + '0');
				if (((i * 100) + (j * 10) + z) < 789)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
