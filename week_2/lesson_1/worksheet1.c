#include <stdio.h>

int exercise1() {
    printf("\nExercise 1");

    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("The number you entered is zero\n");
    }
    else if (num > 0) {
        printf("The number you entered is positive\n");
    }
    else if (num < 0) {
        printf("The number you entered is negative\n");
    }

    return 0;
}

int exercise2() {
    printf("\nExercise 2");

    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);

    if (num % 4 == 0 && num % 5 == 0) {
        printf("The number you entered is divisible by 4 and 5\n");
    }
    else {
        printf("The number you entered is not divisible by 4 and 5\n");
    }

    return 0;
}

int exercise3() { 
    printf("\nExercise 3");

    int mark;
    printf("\nEnter a mark: ");
    scanf("%d", &mark);

    if (mark >= 0 && mark <= 100) {
        if (mark >= 70) {
            printf("You have achieved a distinction\n");
        }

        else if (mark >= 50) {
            printf("You have achieved a pass\n");
        }

        else {
            printf("You have failed\n");
        }

    }
    else {
        printf("Invalid mark\n");
    }
    
    return 0;
}

int exercise4() {
    printf("\nExercise 4");

    int temperature;
    printf("\nEnter a temperature: ");
    scanf("%d", &temperature);

    if (temperature >= -10 && temperature <= 40) {
        printf("The temperature you entered is between -10 and 40 degrees\n");
    }
    else {
        printf("The temperature you entered is not between -10 and 40 degrees\n");
    }

    return 0;
}

int exercise5() {
    printf("\nExercise 5");

    int choice;
    printf("\n1) Option 1\n 2) Option 2\n 3) Option\n 4) Option 4\n 5) Option 5\n\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Option 1\n");
            break;
        case 2:
            printf("Option 2\n");
            break;
        case 3:
            printf("Option\n");
            break;
        case 4:
            printf("Option 4\n");
            break;
        case 5:
            printf("Option 5\n");
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
    
    return 0;
}

int exercise6() {
    printf("\nExercise 6");

    int num = 0;

    while (num != -1) {
        num = 0;
        printf("\nEnter a number: ");
        scanf("%d", &num);
        if (num >= 0 && num <= 100) {
            printf("The number you entered is between 0 and 100\n");
        }
        else {
            printf("The number you entered is not between 0 and 100\n");
        }
    }

    printf("The number you entered was the termination value\n");

    return 0;
}

int main() {
    exercise6();
    return 0;
}
