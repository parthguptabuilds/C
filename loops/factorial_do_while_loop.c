#include <stdio.h>

int main(){

    int i=1;
    int product =1;
    int n;
    printf("enter the value of n:\n");
    scanf("%d",&n);

    do{

        product *=i;
        i++;
    }while(i<=n);
            printf("the product of factorial is%d",product);


    return 0;
}