//Take a number from the user and print its table.


#include <stdio.h>

int main(){
    int product=0;
    printf("enter the value ");
    scanf("%d",&product);

    for(int i=1;i<=10;i++){

        printf("%d *%d =%d\n",product,i,product*i);
    }


}
