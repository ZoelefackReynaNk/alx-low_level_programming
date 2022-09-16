#include <stdio.h>
/**
 * print sum of  all multiples of 3 
 * or 5 below 1024,
 * followed by a new line
 */
int main()
{
        int i;
        int sum = 0;
        
        for (i = 0; i <= 1024; i++){
                if (i%3 == 0 || i %5 == 0){
                     sum = sum + i;   
                }
                else(){
                        continue
                }
        }
        printf("%d\n", sum);
        return (0);
}
