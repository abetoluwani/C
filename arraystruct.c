#include <stdio.h>
#include <string.h>

struct users
{
    char name[25];
    double gpa;

};


int main (){
    struct users user1 ={"viera", 4.50};
    struct users user2 = {"klaus", 5.0};
    struct users user3 = {"Dabis",  3.9};

    struct users students[] = {user1, user2, user3,};


    for(int i = 0; i < sizeof(students)/sizeof(students[0]); i++){

      printf("name:%-12s\t", students[i].name);

      printf("gpa: %.2f\n", students[i].gpa);

   }

    return 0;
}