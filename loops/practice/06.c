// Check whether a number is prime or not.

#include <stdio.h>

int main()
{
    int n;
    int prime = 1;
    printf("enter th evalue of n:\n");
    scanf("%d", &n);

    if (n == 0 || n == 1)
    {
        prime = 0;
    }

    else
    {
        for (int i = 2; i <= n; i++)
        {

            if (n % i == 0)
            {
                prime = 0;
                break;
            }
        }
    }

    if (prime)
    {
        printf("this number is prime");
    }

    else
    {
        printf("this number is not prime");
    }

    return 0;
}
