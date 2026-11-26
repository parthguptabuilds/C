#include <stdio.h>

int main()
{

    int prime = 0;
    int n;
    int i = 2;
    printf("Enter th evalue of n");
    scanf("%d", &n);

    if (n == 0 || n == 1)
    {
        prime = 1;
    }

    else
    {

        do
        {
            if (n % i == 0 && n != 2)
            {
                prime = 1;
                break;
            }
            i++;

        } while (i <= n);
        if (prime)
        {
            printf("this is not prime");
        }

        else
        {
            printf("this is prime");
        }
    }

    return 0;
}