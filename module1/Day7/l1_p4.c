#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
    int rollno;
    char name[20];
    float marks;
};

void parseString(const char *str, struct Student *student) {
    sscanf(str, "%d %s %f", &student->rollno, student->name, &student->marks);
}

void sortArray(struct Student *array, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j].marks < array[j + 1].marks) {
                struct Student temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main() {
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);

    struct Student *students = (struct Student *) malloc(size * sizeof(struct Student));

    for (int i = 0; i < size; i++) {
        char input[100];
        printf("Enter student details (rollno name marks): ");
        scanf(" %[^\n]", input);
        parseString(input, &students[i]);
    }

    sortArray(students, size);

    printf("\nSorted students based on marks (descending order):\n");
    for (int i = 0; i < size; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n", students[i].rollno, students[i].name, students[i].marks);
    }

    free(students);
    return 0;
}