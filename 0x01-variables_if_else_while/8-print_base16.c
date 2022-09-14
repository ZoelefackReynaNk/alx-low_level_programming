#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	char c = 'a';

	i = 0;
	while (i < 16)
	{
		if (i < 10)
		{
			putchar(i + '0');
		}
		else
		{
			putchar(c);
			c++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
