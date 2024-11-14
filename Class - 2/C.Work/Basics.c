#include <stdio.h>

int main(){
    int x; //creates an integer box with its name as x
    x = 7; //assigns the integer value 7 to the box named: x
    printf("%d",x); // here %d gives us the output for the integer value x
    printf("\n"); // "\n" is a command which tells the computer to move to the next line
    x = x + 9; // adds 9 to the interger value
    printf("%d\n",x);
    int y; // creates an integer box with its name as y
    y = 4; // assigned the integer value 4 to y 
     printf("%d\n",y);
    printf("%d\n",x - y); // subtraction can be used here because %d gives output for integer values and here both x and y are integers
    printf("%d\n",x + y); // same thought process as subtraction 
    printf("%d\n",x * y); // "                                 "
    printf("%d\n",x / y); // the value will always come out to be an integer, the fraction part will be removed as this a int data type.
    return 0;
}