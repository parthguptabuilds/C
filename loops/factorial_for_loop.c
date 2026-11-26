#include <stdio.h>

int main(){

    int product =1;
    int n;

    printf("enter the value of n:\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){

        product *=i;
    }

    printf("the product of factorial is%d",product);

}