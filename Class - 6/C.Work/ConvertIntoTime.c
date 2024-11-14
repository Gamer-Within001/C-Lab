#include <stdio.h>

int main() {
    int year , c , n;

    printf("Enter a Year: ");
    scanf("%d", & year);
    printf( "Enter 1 For Months \n Enter 2 For Days \n Enter 3 for Hours\n Enter 4 For Minutes \n Enter 5 For Seconds \n");
    scanf("%d", & c);
    switch (c) {
        case 1:
        n = ( year * 12 );
            printf("Months = %d \n", n);
            break;
        case 2:
        n = ( year * 365);
            printf("Days = %d \n", n);
            break;
        case 3:
        n = ( year * 8760);
            printf("Hours = %d \n", n);
            break;
        case 4:
        n = ( year * 525600);
            printf("Minutes = %d \n", n);
            break;
        case 5:
        n = ( year * 31536000);
            printf("Seconds = %d\n", n);
            break;
        default:
            printf("Invalid Input");
    }
    return 0;
}