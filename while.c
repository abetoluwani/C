#include <stdio.h>
#include <string.h>

int dowhile();

int main (){
    char name[25];

   printf("\nWhat's your name?: ");

   fgets(name, 25, stdin);
    // to prevent the name going to the next line
   name[strlen(name) - 1] = '\0';



   while(strlen(name) == 0){
      printf("\nYou did not enter your name");
      printf("\nWhat's your name?: ");
      fgets(name, 25, stdin);
      name[strlen(name) - 1] = '\0';
   }

    printf("Hello %s\n", name);

    dowhile();

    return 0;
}

int dowhile() {
    int i = 9;
    do{
        printf("%d\n",i);
        i--;
    }while(i>0);

    return 0;
}