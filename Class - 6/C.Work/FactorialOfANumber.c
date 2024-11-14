#include <stdio.h>

int main() {
    int n, factorial = 1;

    // Ask the user for input
    printf("Enter A Number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined.\n");
    } else {
       
       int i = 1;
        while (i <= n) {
            factorial *= i;
            i++; 
        }
        printf("The factorial of %d is: %d\n", n, factorial);
    }
    return 0;
}