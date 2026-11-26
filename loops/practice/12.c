//Print all prime numbers between 1 and N.

#include <stdio.h>

int main(){
    int n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);

    for(int i=2;i<=n;i++){

        int prime=1;
        for(int j=2;j<i;j++){
            
            if( i%j ==0){
                prime =0;
                break;
            }
        }

        if (prime)
        {
           printf("%d\n",i);
        }
        
    }

    



    return 0;
}