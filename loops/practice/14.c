//Check whether a number is an Armstrong number


#include <stdio.h>

int main(){

    int n;
    int digit;
   
    int sum=0;

    printf("Enter the value of n:\n");
    scanf("%d",&n);


     int original=n;
     
    while(n>0){

        digit=n%10;
        sum = sum+(digit*digit*digit) ;
        n /=10;

    }

    if(sum == original){
        printf("this Armstrong number ");
    }

    else{
        printf("this is not Armstrong number");
    }



    return 0;
}