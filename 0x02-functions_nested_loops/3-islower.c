#include <stdio.h>
/**
 * _islower - check for lower case
 * @c: character to test.
 * Return: 1 on success. 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
