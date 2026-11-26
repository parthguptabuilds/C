#include <stdio.h>

int main(){

    int age;
    printf("enter your age ");
    scanf("%d",&age);


    if(age>60){
        printf("your are now senior citizen");

    }

    
    else if(age>40){
        printf("your are now elder ");

   }

    else if(age>18){

        printf("your are now adult");

    }


   else{
    printf("your still teen");
   }



    return 0;
}