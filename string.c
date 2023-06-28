#include <stdio.h>
#include <string.h>

int main(){

    char string1[]= "Cyber";
    char string2[] = "Tolu";

     //strcat(string1, string2);                     // appends string2 to end of string1
    //strncat(string1, string2, 3);                 // appends n characters from string2 to string1
    //strcpy(string1, string2);                     // copy string2 to string1
    strncpy(string1, string2, 2);                 // copy n characters of string2 to string1
   
    
   //int result = strlen(string1);                 // returns string length as int
   //int result = strcmp(string1, string2);        // string compare all characters
   //int result = strncmp(string1, string2, 1);    // string compare n characters
   //int result = strcmpi(string1, string1);       // string compare all (ignore case)
   //int result = strnicmp(string1, string1, 1);   // string compare n characters (ignore case)

    printf("%s",string1);



    return 0;
}