#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int exercise_1() {
    int sum = 0;
    int numarray[5];

    int randomnum;
    srand(time(NULL));
    randomnum = rand() % 100 + 1;

    for (int i = 0; i < 5; i++) {
        randomnum = rand() % 100 + 1;
        numarray[i] = randomnum;
        printf("%d, ", numarray[i]);
        sum += numarray[i];
    }
    
    printf("\n%d\n", sum);
}

int exercise_2() {
    int numarray[8];

    int randomnum;
    srand(time(NULL));
    randomnum = rand() % 100 + 1;

    for (int i = 0; i < 8; i++) {
        randomnum = rand() % 100 + 1;
        numarray[i] = randomnum;
        printf("%d, ", numarray[i]);
    }

    int start = 0;
    int end = (sizeof(numarray) / sizeof(numarray[0])) - 1;
    
    int temp = 0;
    while (start != end && start < end) {
        temp = numarray[start];
        numarray[start] = numarray[end];
        numarray[end] = temp;
        start++;
        end--;
    }
    
    for (int i = 0; i < 8; i++) {
        printf("%d, ", numarray[i]);
    }
}


int exercise_3() {
    int numarray[5];

    int randomnum;
    srand(time(NULL));
    randomnum = rand() % 100 + 1;

    for (int i = 0; i < 5; i++) {
        randomnum = rand() % 100 + 1;
        numarray[i] = randomnum;
        printf("%d, ", numarray[i]);
    }

    int max = numarray[0];
    for (int i = 1; i < 5; i++) {
        if (numarray[i] > max) {
            max = numarray[i];
        }
    }
    printf("\n%d\n", max);

}


int exercise_4() {
    int numarray[5];

    int randomnum;
    srand(time(NULL));
    randomnum = rand() % 100 + 1;

    for (int i = 0; i < 5; i++) {
        randomnum = rand() % 100 + 1;
        numarray[i] = randomnum;
        printf("%d, ", numarray[i]);
    }

    int last = numarray[(sizeof(numarray) / sizeof(numarray[0])) - 1];
    
    for (int i = (sizeof(numarray) / sizeof(numarray[0])) - 1; i >= 0; i--) {
        numarray[i] = numarray[i-1];
    }
    numarray[0] = last;

    printf("\n");
    for (int i = 0; i < 5; i++) {
        printf("%d, ", numarray[i]);
    }
}

int exercise_5() {
    int numarray[5];
    int randomnum;
    srand(time(NULL));
    for (int i = 0; i < 5; i++) {
        randomnum = rand() % 10 + 1;
        numarray[i] = randomnum;
        printf("%d, ", numarray[i]);
    }

    int count[5] = {1,1,1,1,1};
    for (int i = 0; i < 5; i++) {
        int count = 0;
        for (int j = 0; j < 5; j++) {
            if (numarray[i] == numarray[j]) {
                count++;
                if (count > 1) {
                    printf("\n%d is a duplicate\n", numarray[i]);
                }
            }
        }
    }

}

int main() {
    exercise_5();
    return 0;
}