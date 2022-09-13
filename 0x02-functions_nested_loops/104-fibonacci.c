#include <stdio.h>
/**
 * main - finds and prints the first 98 fibonacci terms
 * followed by a , and then a space
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, next;

	j = 1;
	k = 2;

	for (i = 1; i <= 98; ++i)
	{
        printf("%d",j);
        /*if (i <= 9)
        {
            putchar(j + '0');
        }
        else if (i < 99 && i >9){
            putchar((j / 10) + '0');
            putchar((j % 10) + '0');
        } 
        else
        {
            putchar((j / 100) + '0');
            putchar(((j % 100) / 10) + '0');
            putchar((j % 10) + '0');
        }*/
        next = j + k;
        j = k;
        k = next;
        putchar("%c",",");
        printf("%s", " ");
		
	}
	return (0);
}