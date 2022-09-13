#include <stdio.h>
/**
 * print_alphabet_x10 - 10_times alphabets
 *
 * Return: Always 0.
 */
int print_alphabet_x10(void)
{
	int i;
	char ch;

	for (i = 0; i <= 9; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
		}
		putchar('\n');
	}
	return (0);
}
