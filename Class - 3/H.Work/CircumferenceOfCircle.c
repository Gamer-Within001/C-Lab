#include<stdio.h>

int main(){
    float sum;
    float pi = 3.14159265359;
    float r;
    printf("Enter Radius:\n");
    scanf("%f", &r);
    sum =(2 * pi * r);
    printf("Circumference Of Circle: %f", sum);
    return 0;
}