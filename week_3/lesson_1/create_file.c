#include <stdio.h>
#include <stdlib.h>

FILE *open_file(char filename[], char mode[]) {
    FILE *file = fopen(filename, mode);
    if (file == NULL) {
        perror("");
        exit(1);
    }
    return file;
}


int main() {
    
    FILE *file = open_file("data.txt", "a+");

    int number, num_lines = 3;
    printf("Type %d numbers: ", num_lines);
    for (int i = 0; i < num_lines; i++) {
        scanf("%d", &number);
        fprintf(file, "%d\n", number);
    }

    int buffer = 50;
    char line[buffer];
    while (fgets(line, buffer, file) != NULL) {
        printf("%s", line);
    }

    fclose(file);
    return 0;

}