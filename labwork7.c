#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

void promptAndGetString(char *str);
int calculateStringLength(const char *str);
void copyString(const char *src, char *dest);
void concatenateStrings(const char *str1, const char *str2, char *result);

int main() {
    char inputString[MAX_SIZE];
    char copiedString[MAX_SIZE];
    char concatenatedString[MAX_SIZE * 2]; // The concatenated string can be twice the size of the input strings
    
    promptAndGetString(inputString); //asking the user to input a string
    
    printf("Input String: %s\n", inputString);
    
    int length = calculateStringLength(inputString); // to calculate the length of the string
    printf("Length: %d\n", length);
    
    copyString(inputString, copiedString); // a function that copies the string
    printf("Copied String: %s\n", copiedString);
    
    char secondString[MAX_SIZE]; // entering the second string for concatenaton
    printf("Enter a second string: ");
    scanf("%s", secondString);
    
    concatenateStrings(inputString, secondString, concatenatedString); //we then concatenate the string here
    printf("Concatenated String: %s\n", concatenatedString);
    
    return 0;
}

void promptAndGetString(char *str) {
    printf("Enter a string: ");
    scanf("%s", str);
}

int calculateStringLength(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

void copyString(const char *src, char *dest) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

void concatenateStrings(const char *str1, const char *str2, char *result) {
    int i = 0, j = 0;
    
    while (str1[i] != '\0') {
        result[j] = str1[i];
        i++;
        j++;
    }
    
    i = 0;
    while (str2[i] != '\0') {
        result[j] = str2[i];
        i++;
        j++;
    }
    
    result[j] = '\0';
}
