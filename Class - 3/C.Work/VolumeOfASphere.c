#include <stdio.h>

int main(){
    float sum; // creating a variable to make the calculations 
    float r; // declaring a variable to store the entered value of pi
    float pi = 3.14159265359; // assigning the value of pi
    printf("Enter Radius:\n"); // asks the user to enter the radius
    scanf("%f", &r); // reads the radius input
    sum = (pi * r *r * r * 4 / 3); // just the formula to calculate the volume of a sphere
    printf("volume of a sphere %f\n", sum);

    return 0;
}