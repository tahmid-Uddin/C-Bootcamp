#include <stdio.h>
#include <stdlib.h>

int main() {
    int line_buffer = 50;
    int pointer = 0;
    char line[line_buffer];
    int file_content[200];
    int number;
    int counter = 0;

    FILE *fp;
    fp = fopen("input.txt", "r");
    while (fgets(line, line_buffer, fp)!= NULL) {
        number = atoi(line);
        file_content[pointer] = number;
        
        if (number > 1000) {
            counter++;
        }

        printf("%d\n", file_content[pointer]);
        pointer++;
    }
    
    fclose(fp);

    printf("The number of numbers greater than 1000 is %d\n", counter);

    int sum;

    for (int i = 0; i < 200; i++) {
        for (int j = 0; j < 200; j++) {
            if (i!= j) {
                sum = file_content[i] + file_content[j];
                if (sum == 2020) {
                    printf("The sum of the %d and %d is %d\n", file_content[i], file_content[j], sum);
                }
            }
        }
    }


    return 0;
}