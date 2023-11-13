#include <stdio.h>
#include <stdlib.h>

struct student {
    char name [20];
    char student_id [11]; // Assuming 10 digits.
    int mark;
};

int main () {
    struct student new_student = {"Name Surname", "28932123", -1};


    printf("Enter the name of the student:  ");
    scanf("%[^\n]", new_student.name);

    printf("Enter the student ID:  ");
    scanf("%s", new_student.student_id);

    printf("Enter the mark of the student:  ");
    scanf("%d", &new_student.mark);

    printf("\nStudent name: %s\n", new_student.name);
    printf("Student ID:   %s\n", new_student.student_id);
    printf("Final mark:   %d\n", new_student.mark);
    return 0;
}
