#include <stdio.h>

int main(){

    int age = 21; // this is a integer

    float gpa = 3.9; // this is a floating number

    char grade = 'A'; //single character always use a single quotes when using 

    char name[] = "Cybertolu"; //array of character

    double total = 67723.12933;

    printf("Am %d years old\n", age); // to insert the int variable into the printf fucntion
    printf("My Cummulative gpa : %f \n", gpa); // to insert the float variable into the printf fucntion
    printf("Am an %c grade student\n", grade); // to insert a single char variable into the printf fucntion
    printf("My name is %s \n", name); // to insert the char array variable into the printf fucntion
    printf("%lf", total);
    return 0;
}