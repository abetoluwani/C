 #include <stdio.h>
 #define PII 31.24
 #define add(x,y) x+y

int main(){

    // constant = fixed value that cannot be altered by the program during its execution

    const float PI = 3.14159;

    //PI = 420.69; YOU CAN'T CHANGE THIS

    printf("%f \n", PI);
    printf("%lf\n",PII); // Calling the constant from the preprocessor
    printf("Addition of 2 values: %d",add(23,234));


    return 0;
}