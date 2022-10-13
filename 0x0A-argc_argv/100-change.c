#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - adds two positive number
 * @argc: number of arguments
 * @argv: array of arguents
 *
 * Return: 0 (Success), or 1 (Success)
 */

int main(int argc, char *argv[])
{
        int num, min, i, values[] = {25, 10, 5, 2, 1}, r, d, mins[5], ch;
        
        if (argc>1 || argc<1){
                printf("Error\n");
                return (1);
        }
        
        if (num < 0){
                printf("0\n");
                return (1);
        }
        
        num = _atoi(argv[1]);
        for (i = 0; i < 5; i++){
                r = num%values[i];
                d = num/values[i];
                if (values[i] == num){
                        min = 1;
                }
                else if (num != values[i] && (r== 1|| r == 2 || r == 5 || r == 10)){
                        min = d+1;
                }
                else if (num != values[i] && r == 3 || r == 12 || r == 4 || r == 6 || r == 7 || r == 11 || r == 15 || r == 20){
                        min = d + 2;
                }
                else if (num != values[i] && r == 8 || r == 9 || r == 13 || r == 14 || r == 16 || r == 17 || r == 21 || r == 22 || r == 25){
                        min = d + 3;
                }
                else if (num != values[i] && r == 18 || r == 19 || r == 24){
                        min = d + 4;
                }
                mins[i] = min;
        }
        ch = mins[0];
        for (i = 0; i < 5; i++){
                if (mins[i + 1] < ch){
                        ch = mins[i + 1];
                }
                
        }
        printf("%d\n", ch);
        return (0);
}
