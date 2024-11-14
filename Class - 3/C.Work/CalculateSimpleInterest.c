#include<stdio.h>

int main(){
    float sum;
    float r, p , t ;
    printf("Enter Principle\n Rate \n Time\n");
    scanf("%f %f %f", &r, &p, &t);
    sum = (p* r * t) / 100;
    printf("Simple Interest:%f",sum);
    return 0;
}