#include <stdio.h>

 int arith ();
 int quest();
 int oper();

int main(){

    //x = x + 1

    //x+=1
    // int x = 10;

    // x = x + 2 or x+=2;
    // x = x - 3 or x-=3;
    // x = x * 4 orx*=4;
    // x = x / 5 or x/=5;
    // x = x % 2;

    // printf("%d\n", x);

    // quest();

    // arith();
    // oper();

    printf("%d", printf("%s", "Hello World!"));
    
    return 0;
}

int arith (){
    float a,b;
    printf ("Enter the first number: ");
    scanf("%f",&a);

    printf("Enter the second number: ");
    scanf("%f", &b);

    printf("a / b = %.2f\n", a/b);
    printf("a + b = %.2f\n", a + b);
    printf("a - b = %.2f\n", a - b);
    // printf("a % b = %f\n", a % b);
    printf("a * b = %.2f\n", a * b);
    
    return 0;
}

int quest(){
    // what is the output of the following C program

    int i = 5;
    int var = sizeof(i++);

    printf("%d\n%d", i, var);

    // the answer would be 5 , 4 cos the size of any integer is 4 bytes

    return 0;
}

int oper(){
    // what would be the answer  
    // refer to https://www.youtube.com/watch?v=-QXh0y__tYY&list=PLBlnK6fEyqRggZZgYpPMUxdY1CYkZtARR&index=35&ab_channel=NesoAcademy

    int a = 1;
    int b = 1;
    int c = ++a || b++;
    int d = b-- && --a;
    int _ = 3;

    printf("%d,%d,%d,%d",d,c,b,a);
    printf("\n%d", _);

    //final output should be 1,1,0,1

    return 0;
}


