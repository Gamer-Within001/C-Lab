#include<stdio.h>

int main(){
    float sum;
    float pi = 3.14159265359;
    float r;
    printf("Enter Radius:\n");
    scanf("%f", &r);
    sum = (pi * r * r) / 2;
    printf("Area Of Semi Circle: %f",sum);
    return 0;
}