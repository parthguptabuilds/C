#include <stdio.h>

int main(){ 

    char grade;

    int marks;
    printf("enter the marks");
    scanf("%d",&marks);

    if(marks<=100 && marks>=90){
        printf("your grade is A");
    }

    else if (marks<=90 && marks>=80){

        printf("your grade is B");
    }

    else if(marks<=80 && marks>=70){
        printf("your grade is C");

    }

    else if(marks<=70 && marks>=60){
        printf("your grade is d");

    }else if(marks<=60 && marks>=50){
        printf("your grade is e");

    }else {
        printf("your grade is f");

    }
}