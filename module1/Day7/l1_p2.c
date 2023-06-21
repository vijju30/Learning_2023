#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void initializeStudents(struct Student* students, int numStudents) {
    char input[100];
    for (int i = 0; i < numStudents; i++) {
        printf("Enter details for student %d: ", i + 1);
        fgets(input, sizeof(input), stdin);

        // Parse the input string
        sscanf(input, "%d %s %f", &(students[i].rollno), students[i].name, &(students[i].marks));
    }
}

int main() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);
    getchar(); // Consume the newline character after reading an integer

    struct Student* students = malloc(numStudents * sizeof(struct Student));

    initializeStudents(students, numStudents);

    // Printing the initialized students
    printf("Initialized students:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d: Roll No: %d, Name: %s, Marks: %.2f\n",
               i + 1, students[i].rollno, students[i].name, students[i].marks);
    }

    free(students);
    return 0;
}