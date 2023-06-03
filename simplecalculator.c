#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main()
{
    float valueOne;
    float valueTwo;
    char operator;
    float answer;


    printf("Enter calculation:\n");
    scanf("%f %c %f", &valueOne, &operator, & valueTwo);

    switch(operator)
        {
            case '/': 
                    answer = valueOne/valueTwo;
                    printf ("%.2f / %.2f = %.2f", valueOne , valueTwo , answer);
                    break;
            case '*': 
                    answer = valueOne*valueTwo;
                    printf ("%.2f x %.2f = %.2f", valueOne , valueTwo , answer);
                    break;

            case '+': 
                    answer = valueOne+valueTwo;
                    printf ("%.2f + %.2f = %.2f", valueOne , valueTwo , answer);
                    break;
            case '-': 
                    answer = valueOne-valueTwo;
                    printf ("%.2f - %.2f = %.2f", valueOne , valueTwo , answer);
                    break;
            case '^': 
                    answer = pow(valueOne,valueTwo);
                    printf ("%.2f ^ %.2f = %.2f", valueOne , valueTwo , answer);
                    break;
            default: 
                    printf("Syntax Error");
        }


    return 0;
}
