#include<stdio.h>

int main(){
    float sum;
    float celcius, fahrenheit;
    printf("Enter Temperature In Centigrade:");
    scanf("%f", &celcius);
    sum = (celcius * 9) / 5 + 32;
    printf("Temperature In Fahrenheit%f",sum);
    return 0;
}