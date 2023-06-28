#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// #function prototypes
int menu();
void signup();
login();
forgot();
change_password();
delete_account();

struct account
{
   char first_name[20];
   char last_name[20];
   char username[30];
   char phone[15];
   char gender;
   char dob[10];
   char password[25];
};


int main(){

    while (1){ // this is saying while true excecute the code below
        switch(menu()){
            case 1:
                signup();
                break;
            case 2:
                login();
                break;
            case 3:
                forgot();
                break;
            case 4:
                change_password();
                break;
            case 5: 
                delete_account();
                break;
            case 6:
                exit(0); // to exit the program 

            default:
        
                printf("Invalid Operation");
                break;
        }
    }
    
    return 0;
}

int menu(){
    int choice;

    printf("\t\t\\t  Main Menu \t\t\t\n");
    printf("1. Sign Up\n");
    printf("2. Log In\n");
    printf("3. Forgot Password or Username\n");
    printf("4. Change Password\n");
    printf("5. Delete Account\n");
    printf("6. Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);

    return choice;
}

void signup(){

    struct account u;
    printf("\t\t\t Creating New Account \t\t\t\\n");

    //first name
    printf("Enter First Name: ");
    scanf("%s",u.first_name);
    //last name
    printf("Enter Last Name: ");
    scanf("%s",u.last_name);
    // Username
    printf("Enter your desired username: ");
    scanf("%s",u.username);
    // Phone number
    printf("Enter your phone number: ");
    scanf("%s",u.phone);
    // Gender
    printf("Gender(M/F): ");
    scanf("%s",u.gender);
    // date of birth
    printf("Date Of Birth: ");
    scanf("%s",u.dob);
    //Password
    printf("Create New Password: ");
    scanf("%s",u.password);
    
}