#include <stdio.h>
#include <time.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int defaultpin= 1234,option,enteredPin,count=0,amount=1;
    float balance = 5000;
    int continueTransaction =1;

    while(defaultpin != enteredPin){
        time_t now; // the simplest data type used to represent simple calendar time
        time(&now);

        printf("\t\t\t\t\t\t===========================");
        printf("\n\t\t\t\t\t\t %s ",ctime (&now)); //we using the ctime to call the variable &now
        printf("\t\t\t\t\t\t===========================");
        printf("\n\n\t\t\t\t\t\t ------  Atm Banking ------");

        printf("\n\n\n\n\t\t\t\t\t\tEnter Pin: ");
        scanf("%d",&enteredPin);

        if (enteredPin != defaultpin){
            Beep(610,500); // this is to beep when the paasword ain't correct
            printf("Invalid Pin");
        }
    }
    
    return 0;