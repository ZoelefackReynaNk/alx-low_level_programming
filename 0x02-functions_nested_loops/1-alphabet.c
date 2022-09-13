#include <stdio.h>
/**
 * print_alphabet - printing alphabets
 *
 * Return: Always 0.
 */
int print_alphabet(void)
{
	char ch = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
