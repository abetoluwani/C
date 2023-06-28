#include<stdio.h>
#include<stdbool.h>


int main (){

    float temp = 25;
    bool sunny = true;
    if(temp >= 0 && temp <= 30 && sunny){
        printf("\nThe weather is good!");
    }

    else{
        printf("\nThe weather is bad!");
    }
    return 0;  
}

void or_operator(){
    float temp = 25;



    if(temp <= 0 || temp >= 30){
        printf("\nThe weather is bad!");
    }

    else{
        printf("\nThe weather is good!");
    }
}

void not_operator(){  bool sunny = false;

    bool subscribed = true;

    if(!sunny){
        printf("\nIt's cloudy outside!");
    }

    else{
        printf("\nIt's sunny outside!");
    }
}