#include <stdio.h>

int add_numbers() {
    float num1, num2, sum;
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);

    sum = num1 + num2;
    printf("\nThe sum of %.2f and %.2f is: %.2f", num1, num2, sum);
    return 0;
}


int favourite_animal() {
    char animal[100];
    printf("Enter your favourite animal: ");
    scanf("%s", animal);
    printf("Your favourite animal is %s\n", animal);

    return 0;
}


int main() {
    test();

    return 0;
}