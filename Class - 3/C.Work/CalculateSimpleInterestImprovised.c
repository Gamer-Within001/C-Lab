#include<stdio.h>

int main(){
    float sum;
    float r, p , t ;
      printf("Enter Principle:"); //prompts the user to enter the principle amount
      scanf("%f", & p); // scanf asks the user for input
    printf("Enter Rate:");
    scanf("%f", & r);
    printf("Enter Time:");
    scanf("%f", & t);
    sum = (p* r * t) / 100;
    printf("Simple Interest:%f",sum);
    return 0;
}