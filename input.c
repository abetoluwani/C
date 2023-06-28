#include <stdio.h>
#include <string.h>

int main(){
    int age;
    char name[25];

    printf("What is your name? ");
    // scanf("%s",&age) // this would only get the characters before A white space
    fgets(name, 25, stdin);
    name[strlen(name)-1]='\0'; // this feature enables the word to be on a line

    printf("Age: ");
    scanf("%d", &age);

    printf("My name is %s and am %d years old", name, age);



    return 0;
}