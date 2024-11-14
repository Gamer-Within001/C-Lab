#include<stdio.h>
int main(){
    float x;
    int y , z;
    printf("Enter A Number :");
    scanf("%f", & x);
    y = (int)x;
    z = (y % 10);
    printf("The Rightmost Digit Of The Floating Point Number Is :%d", z);
    return 0;
}