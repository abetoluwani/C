#include<stdio.h>
#include<string.h>

int main (){
    const double pie = 3.142;   
    double radius;
    double cirucumference;
    double area;

    printf("Enter the radius: ");
    scanf("%lf",&radius);

    cirucumference = 2 * radius * pie;

    printf("Circumference: %.3lf", cirucumference);

    printf("\nEnter the radius: ");
    scanf("%lf",&cirucumference);

    radius = cirucumference/(2 * pie);

    printf("\nRadius:%.3lf",radius);

    printf("Enter your radius: ");
    scanf("%lf",&radius);

    printf("Enter your  circumference:");
    scanf("%lf",&radius);

    area  = (cirucumference * radius)/ (2 * pie);

    printf("Area: .%3lf", area);

    return 0;
}