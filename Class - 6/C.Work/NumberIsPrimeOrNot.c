#include <stdio.h>

int main() {
    int a , b;

    printf("Enter A Number : ");
    scanf("%d", & a);
    for(int i = 2 ; i <= a - 1; i++)
    {
        if (a % i == 0)
        {
            b = 1;
            break;
        }
    }
    if (a==1)
    {
        printf("The Number Is Neither Prime Nor Even");
    }
    else if(b == 1)
    {
        printf("The Given Number Is A Composite Number");
    }
    else{
        printf("The Given Number Is A Prime Number");
    }
    
    return 0;
}