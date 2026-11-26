// Count the number of digits in a number.

#include <stdio.h>

int main()
{

    int n;
    printf("enter the value of n:\n");
    scanf("%d", &n);
    int count = 0;

    while (n>0)
    {
         n /=10;
        count++;

    }
    printf("Number of digits = %d", count);

    
}
