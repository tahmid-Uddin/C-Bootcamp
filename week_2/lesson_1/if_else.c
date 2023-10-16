#include <stdio.h>

int main() {
    int mark;
    printf("Enter your mark: ");
    scanf("%d", &mark);

    if (mark >= 0 && mark <= 100) {
        if (mark == 0) {
            printf("The mark of %d is zero\n", mark);
        }
        else if (mark < 40) {
            printf("The mark of %d is a fail\n", mark);
        }
        else {
            printf("The mark of %d is a pass\n", mark);
        }
    }

    else {
        printf("Invalid mark\n");
    }

    return 0;
}
