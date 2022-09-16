#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the int to check
 * Return: the absolute value of int
 */
int _abs(int n)
{
        int i = n;
        if (i >= 0)
        {
                return(n);
        }
        else{
                return (-n);
        }
        return (0);
}
