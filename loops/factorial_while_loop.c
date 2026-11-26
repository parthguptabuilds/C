#include <stdio.h>

int main(){
    int i=1;
    int n;
    int product=1;

    printf("enter the value of n:\n");
    scanf("%d",&n);

    while(i<=n){

        
        product *=i;
        i++;
    }
    printf("the product of factorial is %d",product);


    return 0;


}