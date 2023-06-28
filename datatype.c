#include <stdio.h>

int main (){
    int day = 234;
    float fd = 34;
    double dg =75645;
    char c = 'y';
    signed i = 2324;
    signed int j = 231;
    unsigned k = 234;
    long l =9238;
    long int m =2131;
    long long n =23432; 
    float a = 2.433;
    unsigned int hey = 12;
    unsigned long them = 1324;

    printf("%d", day); // format specifier for int
    printf("%f",fd); // format specifier for float
    printf("%ld",dg); // format specifier for double
    printf("%c\n",c); // format specifier for character
    printf("%d \n",i); // format specifier for signed integer
    printf("%d\n ",j); // format specifier for integer
    printf("%i\n",k); // format specifier for unsigned integer or %u    
    printf("%ld\n",l); // format specifier for long
    printf("%ld\n",m); // format specifier for long
    printf("%lld\n",n); // format specifier for long long
    printf("%f\n",a); // format specifier for float
    printf("%i\n",hey); // format specifier for unsigned integer
    printf("%lu\n",them); // format specifier for unsigned long
    // printf("%n"); //prints nothing
    return 0;
}