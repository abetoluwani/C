#include <stdio.h>
#include<string.h>
#include <stdlib.h>
#include <stdbool.h>

int usrinput(); // function prototype

int main(){
    FILE *learning; // a variable that you can assign the file to

    //fopen("filename",  "mode ");
    learning = fopen("ss.txt","w"); // "w"= to write and overwrite a new or existing file (if the file does not exist it would open a new file or overwite the exising data in the file )
                                    // "a" = to add  more details to a file instead of overwriting it
    if (learning == NULL){
        printf("File not created");
    }
    else{
        printf("File Created");

    }

    fputs("A test for starting files in C\n", learning);
    fputs("A test for files in C\n", learning);
    fputs("A test for starting in C\n", learning);

    // you can also use this to input what you want into a file
    int data = 5;
    fprintf(learning,"Number: %d\n",data);
    

    fclose(learning); // always close a file afer using fopen by using fvlose

    usrinput();
    // "r"= to read in  a file
    

    // working with a binary file 
    // "rb" "wb" "ab"

    return 0;
}

int usrinput(){

    // this is to collect data from a user input and store it in a file

    FILE *learnt;

    learnt = fopen("sw.txt","w");
    int input = 0;

    while (true)
    {
        printf("\nEnter Number (-1 to quit): ");
        scanf("%d",&input);

        if (input == -1){
            break;
        }

        else {
            fprintf(learnt,"%d\n",input);
        }
    }

    fclose(learnt);

    // Reading from a file
    FILE *fhinput;  

    fhinput = fopen("sw.txt","r"); // to assign to the read to the file

    int finput = 0;

    // to read everything in the file instead of printing the first line
    while (fscanf(fhinput,"%d",&finput)!= EOF){
         printf("Number: %d\n",finput);
    }
   
    
    

    
    return 0;

}