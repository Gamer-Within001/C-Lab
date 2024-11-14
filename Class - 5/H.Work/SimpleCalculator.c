#include<stdio.h>
int main(){
    float x , y;
    char Operators;
    float result;
    printf("Enter First No:");
    scanf("%f",& x);
    printf("\nEnter Second No:");
    scanf("%f", & y);
    printf("Enter An Operator(+, -, *, /):");
    scanf(" %c", & Operators);
    switch (Operators)
    {
    case '+':
        result = (x + y);
        printf("%f", result);
        break;
    case '-':
        result= (x - y);
        printf("%f", result);
        break;
    case '*':
        result= (x * y);
        printf("%f", result);
        break;
    case '/':
        result= (x / y);
        printf("%f", result);
        break;
    default:
            printf("Invalid Operator Used, Try Again");
        break;
    }
    return 0;
}