#include <stdio.h>

int main() {
    long double width;
    long double height;
    long double area;

    printf("Enter the width of the rectangle: ");
    scanf("%Lf", &width);
    
    printf("Enter the height of the rectangle: ");
    scanf("%Lf", &height);
    
    area = width * height;
    printf("The area of the rectangle is: %.10Lf\n", area);
}