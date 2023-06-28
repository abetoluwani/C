#include <stdio.h>

int findmax(int x, int y){

    // (condition) ? value if true : value if false
    return (x>y) ? x : y ;
}

int main (){

    int max = findmax(9,12);

    printf("Max Number: %d", max);
    return 0;
}