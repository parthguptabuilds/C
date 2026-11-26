#include <stdio.h>

int main(){

    int n;
    printf("Enter the value of N:\n");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        if(i==7){
            continue;
        }
        printf("%d\n",i);
    }

    return 0;
}