#include<stdio.h>

int main (){

    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 18){
        printf("You are Eligbile");
    }

    else if (age < 0){
        printf ("you have not been born yet");
    }

    else if (age == 0){
        printf("You need to be at least 18 years of age");
    }

    else{
        printf("You are not eligible");
    }
    

    return 0;
}