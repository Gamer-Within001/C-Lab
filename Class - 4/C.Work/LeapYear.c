#include<stdio.h>
int main(){
    int x;
    printf("Enter A Year :");
    scanf("%d", & x);
    if ((x % 4 == 0) && (x % 100 != 0)||(x % 400 == 0))
    {
        printf("The Year %d Is A Leap Year", x);
    }
    else{
        printf("The Year %d Is Not A Leap Year",x);
    }
    return 0;
}