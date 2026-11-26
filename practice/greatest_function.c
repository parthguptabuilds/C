#include <stdio.h>

int main(){

    int a,b,c,d;

    printf("Enter the value of a:\n");
    scanf("%d",&a);
    printf("Enter the value of b:\n");
    scanf("%d",&b);
    printf("Enter the value of c:\n");
    scanf("%d",&c);
    printf("Enter the value of d:\n");
    scanf("%d",&d);

    if(a>b && a>c && a>d){
        printf("the greatest of all is %d",a);
    }

    else if(b>a && b>c && b>d){
        printf("the greatest of all is %d",b);
    }
    else if(c>b && c>a && c>d){
        printf("the greatest of all is %d",c);
    }
    else if(d>a && d>c && d>b){
        printf("the greatest of all is %d",d);
        
    }
    
}