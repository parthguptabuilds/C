// Find the sum of digits of a number.

#include <stdio.h>

int main()
{
    int n;
    printf("enter the value of n:\n");
    scanf("%d", &n);

    int digit;
    int sum = 0;
    while (n > 0)
    {
        digit = n % 10;
        sum = sum + digit;
        n /=10;
    }

    printf("%d", sum);

    return 0;
}


