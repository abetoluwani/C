#include<stdio.h>
// function prototypes and are also called global variable
void Greeting();
void small_msg();
void input(char name [], int yrs);



int main(){
    int yrs = 4 ;
    char name[]="Cybertolu";

    Greeting();
    small_msg();
    input(name, yrs);


    return 0;
}

void Greeting(){
    printf("Hi, Good morning\t");
}

void small_msg(){

    printf("\nYou have been selected for the global ctf challenge from your region");
}

void input(char name [], int yrs){
    printf("\nHello, I am a %s ,this is my first year though , so i decided to make this code", name);
    printf("\nThe duration for my course is %d years", yrs);
}