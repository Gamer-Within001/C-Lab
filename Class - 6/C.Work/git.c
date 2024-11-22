#include <stdio.h>

int main() {
    int choice;
    float radius, length, breadth, side, area;

    printf("Menu:\n");
    printf("1. Area of Circle\n");
    printf("2. Area of Rectangle\n");
    printf("3. Area of Square\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            area = 3.14159 * radius * radius;
            printf("Area of Circle: %.2f\n", area);
            break;
        case 2:
            printf("Enter the length and breadth of the rectangle: ");
            scanf("%f %f", &length, &breadth);
            area = length * breadth;
            printf("Area of Rectangle: %.2f\n", area);
            break;
        case 3:
            printf("Enter the side of the square: ");
            scanf("%f", &side);
            area = side * side;
            printf("Area of Square: %.2f\n", area);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}