#include <stdio.h>
/**
 * main - finds and prints the first 98 fibonacci terms
 * followed by a , and then a space
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, next, sum;

	j = 1;
	k = 2;
	sum = 0;

	for (i = 1; i <= 98; ++i)
	{
        if (i <= 9){
            _putchar(j + '0');
        } else{
            _putchar((j / 100) + '0');
            _putchar(((j % 100) / 10) + '0');
            _putchar((j % 10) + '0');
        }
        next = j + k;
        j = k;
        k = next;
        _putchar(',');
        _putchar(' ');
		
	}
	_putchar('\n');
	return (0);
}