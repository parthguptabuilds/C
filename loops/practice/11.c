//Print all odd numbers between 1 and N.
#include <stdio.h>

int main(){
    int even=0;
    int n;
    printf("enter the number where you want to print numbers:\n");
    scanf("%d",&n);

    for(int i=2;i<=n;i++){

        if(i % 2 != 0){
            printf("%d\n",i);
        }
    }


    return 0;
}