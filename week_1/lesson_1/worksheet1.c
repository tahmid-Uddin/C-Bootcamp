#include <stdio.h>
#include <math.h>

int area_of_circle() {
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("The area of the circle is %f\n", M_PI * radius * radius);
    return 0;
}

int main() {
    area_of_circle();
    return 0;
}

