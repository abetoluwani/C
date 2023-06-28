#include <stdio.h>
#include <string.h>

void withstruct();


typedef char user [25];

int main(){

    user fellow = "cyber";
    printf("%s\n", fellow);

    withstruct();



    return 0;
}

// using type def with struct
typedef struct 
{
    char name [25];
    char pass [12];
    int id;

}details;

void withstruct (){
    details client1 = {"Damv", "dfudgyf", 123456789};

    printf("%s\n", client1.name);
    printf("%d\n", client1.id);


}