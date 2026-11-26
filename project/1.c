/*We will write a program that generates a random number and asks the player to guess
it. If the player's guess is higher than the actual number, the program displays "Lower
number please". Similarly, if the user's guess is too low, the program prints "Higher
number please".

When the user guesses the correct number, the program displays the number of
guesses the player used to arrive at the number.*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));

    int rand_num = rand() % 100 + 1;     
    int guessed_num;
    int no_of_guesses=0;

    do
    {
        printf("Enter your number:\n");
        scanf("%d",&guessed_num);
            if(guessed_num > rand_num){
                printf("Guess lower number\n");
            }

            else if(guessed_num < rand_num){
                printf("guess higher number\n");

            }

            else{
                printf("you guess the write number\n");
            }

            no_of_guesses++;
    } while (guessed_num!= rand_num);

    printf("You guess the number in %d chances",no_of_guesses);
    


return 0;
}
