//Reverse a number.

#include <stdio.h>

int main(){
    int n;
    int digit;
    int reverse=0;
    printf("enter the value of n:");
    scanf("%d",&n);

    while(n>0){
        digit=n%10;
        reverse= reverse*10+digit;
        n /=10;
    }

    printf("%d",reverse);
}