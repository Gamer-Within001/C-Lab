#include<stdio.h>
int main(){
    int a , b , c , d;
    printf("Enter No A :");
    scanf("%d", & a);
    printf("Enter No B :");
    scanf("%d", & b);
    printf("Enter No C :");
    scanf("%d", & c);
    printf("Enter No D :");
    scanf("%d", & d);
    if (a < b && a < c && a < d)
    {
        printf("The Number %d Is The Smallest Integer",a);
    }
    else{
        if (b < a && b < c && b < d)
        {
            printf("The Number %d Is The Smallest Integer",b);
        }
    
    else {
    if ( c <a && c < b && c < d )
    {
        printf("The Number %d Is The Smallest Integer",c);
    }
    else {
        printf("The Number %d Is The Smallest Integer",d);
    }
    }
    }
    return 0;
}