#include <stdio.h>

int main(){

    printf("first we do for while loop\n");

    int i =10;

    while(i<4){
        printf("hello\n");
        i++;
    }

    /*isme code run nhi hoga bcz "while" loop pahele code 
     check kerta hai then run kerta hai*/


     printf("then we check for 'do while' loop\n");

     do{
        printf("hello");
     }
     while(i<5);

     /*isme code run hoga bcz "do while" mei pahele code run
     hota hai then check hota hai*/


}