//Find the largest digit in a number.

#include <stdio.h>

int main(){
    int digit;
    int n,largest=0;
    printf("Enter the value of n:\n");
    scanf("%d",&n);

    while (n>0)
    {
        digit = n%10;
        if(digit>largest){
            largest=digit;
        
        }

        n /=10;


        
        
    }

    printf("%d",largest);
    


    return 0;
}