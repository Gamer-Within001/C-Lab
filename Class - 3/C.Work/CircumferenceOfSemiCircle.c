#include<stdio.h>

int main(){
    float sum;
    float pi = 3.14159265359;
    float r;
    printf("Enter Radius:\n");
    scanf("%f", &r);
    sum =( pi * r) + (2 * r);
    printf("Circumference Of Semi Circle: %f", sum);
    return 0;
}