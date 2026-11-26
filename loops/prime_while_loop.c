#include <stdio.h>

int main()
{

    int prime = 0;
    int i = 2;
    int n;

    printf("Enter the value of n:\n");
    scanf("%d", &n);

    if (n == 0 || n == 1)
    {
        prime = 1;
    }
    else
    {
        while (i <= n)
        {
            if (n % i == 0 && n != 2)
            {
                prime = 1;
                break;
            }
            i++;
        }

        if (prime==1)
        {
            printf("This is not prime number");
        }

        else
        {
            printf("this is prime number");
        }
    }

    return 0;
}