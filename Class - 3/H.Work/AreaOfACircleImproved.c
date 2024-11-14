#include<stdio.h>

int main(){
    float sum;
    float r;
    float pi = 3.1415;
    printf("Enter Radius:");
    scanf("%f", &r); //added scan to make it ask us the radius in the output
    sum = (pi* r * r);+
    printf("Area Of Circle:%f",sum);
    return 0;
}