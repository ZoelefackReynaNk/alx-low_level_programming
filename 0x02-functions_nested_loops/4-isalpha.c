#include <stdio.h>
/**
 * _isalpha - check if it is an alphabet
 * @c: character to be tested.
 * Return: 1 on success. 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
