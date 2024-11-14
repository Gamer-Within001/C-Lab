#include<stdio.h>
int main(){
    int a , b , c , d;
    printf("Enter Four Distinct Positive Integers :");
    scanf("%d %d %d %d", & a, & b , & c , & d);
    if (a > b && a > c && a > d)
    {
        printf("%d Is The Greatest Integer", a);
    }
    if (b > a && b > c && b > d)
    {
        printf("%d Is The Greatest Integer", b);
    }
    if (c > b && c > a && c > d)
    {
        printf("%d Is the Greatest Interger ", c);
    }
    if (d > b && d > a && d > c)
    {
        printf("%d Is the Greatest Interger ", d);
    }
    return 0;
}