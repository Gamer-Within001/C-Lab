#include<stdio.h>

int main(){
    float sum;
    float pi = 3.14159265359;
    float r;
    printf("Enter Radius:\n");
    scanf("%f", &r);
    sum = ( 4 * pi * r * r);
    printf("Surface Area Of Spehere:%f", sum);
    return 0;
}