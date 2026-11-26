#include <stdio.h>

int main(){
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);

    printf("the character is:%c\n",ch);
    printf("the value of character is%d\n",ch);


    if(ch >= 97 && ch <= 122){
        printf("this is a small character");
    }

    else{
        printf("this is uppercaste charac");
    }
}