//Find the factorial of a number.  

#include <stdio.h>

int main(){
    int n;
    printf("enter the value of n:\n");
    scanf("%d",&n);

    int product=1;

    for(int i=1;i<=n;i++){
        product*=i;


    }
    printf("the factorial of %d is %d ",n,product);

    return 0;
}