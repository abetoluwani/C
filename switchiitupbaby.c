#include <stdio.h>

int others();

int main(){

    char grades;

    printf("\t\t All input must be in upper case\n");

    others();

    printf("\nGrade: ");
    scanf("%s", &grades);

    switch (grades){
        case 'A':
            printf("Excellent");
            break;
        case 'B':
            printf("Bravo");
            break;
        case 'C':
            printf("Good");
            break;
        case 'D':
            printf("Try Harder Next Time");
            break;
        case 'F':
            printf("Damn Nigga You Failed");
            break;
        default:
            printf("Enter an appropriate grade");
            
    }

    return 0;
} 

int others(){
    int x =23;

    switch (x)
    {
    case 3+3:
        printf("Choice 1");
        break;
    case 3+4*5:
        printf("Choice 2");
        break;
    default:
        printf("default");
        break;
    }

    return 0;
}