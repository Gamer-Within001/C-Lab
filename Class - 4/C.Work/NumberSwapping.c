#include<stdio.h>
int main(){
    int x , y ,z, temp;
    printf("Enter First No A :");
    scanf("%d", & x);
    printf("Enter First No B :");
    scanf("%d", & y);
    printf("Enter First No C :");
    scanf("%d", & z);
    printf("Before Swapping A :%d \n B : %d \n C : %d \n ", x , y, z);
    temp = x;
    x = z;
    y = y;
    z = temp;
    printf("\n After Swapping A :%d \n B : %d \n C : %d \n ", x , y, z);
    return 0;
}