#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ex1() {
    for (int a = 1; a <= 10; a++) {
        printf("%d\n", a);
    }
}

int ex2() {
    for (int a = 0; a <= 50; a += 2) {
        printf("%d\n", a);
    }
}

int ex3() {
    for (int a = 0; a <= 1000; a += 11) {
        printf("%d\n", a);
    }
}

int ex4() {
    for (int a = 100; a >= 0; a -= 5) {
        printf("%d\n", a);
    }
}

int ex5() {
    int randomnum, guess;
    srand(80);
    randomnum = rand() % 100 + 1;

    while (randomnum != guess) {
        printf("Guess a number between 1 and 100: ");
        scanf("%d", &guess);
        if (guess == randomnum) {
            printf("You got it!\n");
            break;
        }
        else if (guess > randomnum) {
            printf("Too high!\n");
        }
        else if (guess < randomnum) {
            printf("Too low!\n");
        }
    }
}

int ex6() {
    for (int i = 1; i <= 12; i++) {
        for (int j = 1; j <= 12; j++){
            printf("%d x %d = %d\n", j, i, i * j);
        }
        printf("\n");
    }
}


int array()
{
    int a [10];
    int count;

    //populate an array
    for (count = 0; count < 10 ; count++)
    {
        a[count] = count * 10 + count;
    }

    printf ("The first and second elements are %d and %d\n", 
    a[0], a[1]);
    printf ("Or, via pointers, %d and %d\n", *a, *(a+1));

    return 0;
}


int main() {
    array();
    return 0;
}