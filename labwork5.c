#include <stdio.h> //preprocessor directive
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// function prototypes
int is_lower();
int is_upper();
int is_alpha();
int is_digit();
int is_alphanum();
int to_lower();
int to_upper();
int distance();
int is_prime();

int main(){
    int choice;
    // Users Input
    while (choice <1 || choice > 9)
    {
        system("clear");
        printf("Select your Operation \n\n");
        printf("1. is it a lower-case letter\n");
        printf("2. is it an upper-case letter\n");
        printf("3. is it an alphabet\n");
        printf("4. is it a digit\n");
        printf("5. Check if it an alphanumeric symbol \n");
        printf("6. Convert to a lower-case letter if it is upper\n");
        printf("7. Convert to an upper-case letter if it is lower\n");
        printf("8. Find Out if the number is a prime \n\n");
        printf("9. Exit\n\n");

        printf("Your Choice: ");
        scanf("%d",&choice);
    }

    switch (choice)
    {
    case 1:
        is_lower();
        break;
    case 2:
        is_upper();
        break;
    case 3:
        is_alpha();
        break;
    case 4:
        is_digit();
        break;
    case 5:
        is_gradesalphanum();
        break;
    case 6:
        to_lower();
        break;
    case 7: 
        to_upper();
        break;
    case 8:
        is_prime();
        break;
    case 9 :
        printf("\t\t\t------------Bye :) ---------------");
        break;
    }
    return 0;
}

int is_lower(){
    char ch = 'g';
  
    if (islower(ch) != 0) {
        printf("%c is a lowercase letter.\n",ch);
    }
    else {
        printf("%c is not a lowercase letter.\n", ch);
    }
  
    return 0;
}

int is_upper(){
    char ch = 'A';
 
    // checking uppercase
    if (isupper(ch))
        printf("\n%c is an uppercase character", ch);
    else
        printf("\nEntered character is not uppercase character");
    
    return 0;
}

int is_alpha(){

    char c = 'w';
    if(isalpha(c))
        printf("%c is an alphabet", c);
    else
        printf("%c is not an alphabet", c);
    return 0;
}

int is_digit(){
    char num1;
    
    printf("Enter A Number From The Keyboard (0-9): ");
    scanf(" %c",&num1);

    if (isdigit(num1) == 0)
         printf("%c is not a digit.",num1);
    else
         printf("%c is a digit.",num1);
    return 0;
}

int is_alphanum(){
    char c;
    printf("Enter a character: ");
    scanf(" %c", &c);

    if (isalnum(c) == 0)
        printf("%c is not an alphanumeric character.", c);
    else
        printf("%c is an alphanumeric character.", c);
    
    return 0;
}
int to_lower(){
    system("clear");
    char c, result;

    printf("Enter an Upper-case character from the keyboard:  ");
    scanf(" %c",&c);
    
    if(isupper(c)){
        result = tolower(c);
        printf("tolower(%c) = %c\n", c, result);
    }
    else{
        printf("The Character is not an Upper-Case");
    }

    return 0;
}

int to_upper(){
    system("clear");
    char c, result;

    printf("Enter an lower-case character from the keyboard:  ");
    scanf(" %c",&c);
    
    if(islower(c)){
        result = toupper(c);
        printf("toupper(%c) = %c\n", c, result);
    }
    else{
        printf("The Character is not an lower-Case");
    }

    return 0;
}

int is_prime(){
    system("clear");
    int num, i, isPrime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the number is divisible by any number between 2 and (num-1)
    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (num == 1) {
        printf("1 is not a prime number.\n");
    }
    else {
        if (isPrime) {
            printf("%d is a prime number.\n", num);
        }
        else {
            printf("%d is not a prime number.\n", num);
        }
    }
    return 0;
}