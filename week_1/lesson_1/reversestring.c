#include <stdio.h>

int main() {
    char name[5];
    printf("Enter your name: ");
    scanf("%s", &name);
    printf("%s > %s\n", name, name[1]);
}
