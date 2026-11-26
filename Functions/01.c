#include <stdio.h>
// this is function prototype

int sum(int, int);

// Function defination
int sum(int x, int y)
{
    printf("The sum is %d\n", x + y);
    return x + y;
}

int main()
{

    int a;
    printf("Enter the value a:");
    scanf("%d", &a);
    int b;
    printf("Enter the value b:");
    scanf("%d", &b);

    sum(a, b); // this is function call

    return 0;
}