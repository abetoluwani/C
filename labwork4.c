#include<stdio.h>
#include<stdlib.h>
#include <math.h>
// function prototypes
float area_rectangle();
float perimeter_rectangle();
int maximum();
int minimum();
int summation();
int sum_odds();
int divisible();
float average();

int main(){
    int choice;
    // Users Input
    while (choice <1 || choice > 9)
    {
        system("clear");
        printf("Select your Operation \n\n");
        printf("1. Area Of a Rectangle\n");
        printf("2. Circumference of a Rectangle\n");
        printf("3. Maximum of Three Integers\n");
        printf("4. Minimum Of Three Integers\n");
        printf("5. Summation Of series of Numbers From 1 to n\n");
        printf("6. Summation Of series of n consecutive odd numbers from 1 to 2n -1\n");
        printf("7. Is First Number Divisible by the Second\n");
        printf("8. Generates a loop to get n numbers from the user to calculate the average of all\n");
        printf("9. Exit \n\n");

        printf("Your Choice: ");
        scanf("%d",&choice);
    }

    switch (choice)
    {
    case 1:
        area_rectangle();
        break;
    case 2:
        perimeter_rectangle();
        break;
    case 3:
        maximum();
        break;
    case 4:
        minimum();
        break;
    case 5:
        summation();
        break;
    case 6:
        sum_odds();
        break;
    case 7: 
        divisible();
        break;
    case 8:
        average();
        break;
    case 9 :
        printf("\t\t\t------------Bye :) ---------------");
        break;
    }
    return 0;
}

float area_rectangle(){
    float length, width, answer;

    system("clear");
    printf("\t\t\t -------------- Area Of A Rectangle ------------------\n");
    printf("Length: ");
    scanf("%f", &length);
    printf("Width: ");
    scanf("%f", &width);

    answer = printf("Area = %.2f", length * width);
    return answer;
}

float perimeter_rectangle(){
    float length, width, answer;

    system("clear");
    printf("\t\t\t -------------- Perimeter Of A Rectangle ------------------\n");
    printf("Length: ");
    scanf("%f", &length);
    printf("Width: ");
    scanf("%f", &width);
    answer = 2 *(length + width);

    printf("Perimeter = %.2f", answer);
    return answer;
}

int maximum(){
    int value1, value2, value3;
    system("clear");
    printf("\t\t\t -------------- Maximum Of Three Integers ------------------\n");
    printf("Value 1: ");
    scanf("%d",&value1);
    printf("Value 2 : ");
    scanf("%d", &value2);
    printf("Value 3: ");
    scanf("%d",&value3);

    if (value2 > value1 && value2 > value3 ){
        printf("\nMax = %d", value2 );
    }
    else if (value1 > value2 && value1 > value3){
        printf("\nMax = %d", value1);
    }
    else if (value3 > value1 && value3 > value2 ){
        printf("\nMax = %d", value3);
    }
    return 0;
}

int minimum (){
    int value1, value2, value3;
    system("clear");
    printf("\t\t\t -------------- Minimum Of Three Integers ------------------\n");
    printf("Value 1: ");
    scanf("%d",&value1);
    printf("Value 2 : ");
    scanf("%d", &value2);
    printf("Value 3: ");
    scanf("%d",&value3);

    if (value2 < value1 && value2 < value3 ){
        printf("\nMinimum = %d", value2 );
    }
    else if (value1 < value2 && value1 < value3){
        printf("\nMinimum = %d", value1);
    }
    else if (value3 < value1 && value3 < value2 ){
        printf("\nMinimum = %d", value3);
    }
    return 0;
}

int summation(){
    int n, sum = 0;
    system("clear");
    printf("\t\t\t -------------- Summation Of A Series Of Numbers From 1 to n ------------------\n");

    printf("Enter a Positive value : ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("\nThe summation of numbers from 1 to %d is %d \n", n, sum);
    return 0;
}

int sum_odds(){
    int n, sum = 0;
    system("clear");
    printf("\t\t\t -------------- Summation Of Consecutive Odd Numbers From 1 to 2n-1 ------------------\n");

    printf("Enter a Positive value : ");
    scanf("%d", &n);

    for(int i = 1; i <= n; ++i) {
        sum += (2*i -1);
    }
    printf("\nThe summation of Consecutive Odd Numbers from 1 to %d is %d \n", n, sum);

    return 0;
}

int divisible(){
    int first, second, check ;
    system("clear");
    printf("\t\t\t -------------- Is first number divisible by the second ------------------\n");

    printf("First Value: ");
    scanf("%d",&first);

    printf("Second Value: ");
    scanf("%d",&second);

    check = first % second;

    if (check == 0){
        printf("\n %d is divisible by %d", first,second);
    }

    else if (check != 0){
        printf("\n%d is not divisible by %d \n", first ,second);
    }
    return 0;
}

float average(){
    system("clear");
    printf("\t\t\t -------------- Average ------------------\n");

    int n, num;
    float sum = 0, avg;

    printf("Enter the number of values: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        printf("Enter value %d: ", i);
        scanf("%d", &num);
        sum += num;
    }
    avg = sum / n;
    printf("The average of the %d numbers is %.2f", n, avg);

    return avg;
}