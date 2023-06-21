#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void initializeArray(struct Student* students, int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter details for student %d:\n", i + 1);

        // Read input string
        char input[100];
        fgets(input, sizeof(input), stdin);

        // Parse the input string
        sscanf(input, "%d %s %f", &(students[i].rollno), students[i].name, &(students[i].marks));
    }
}

void searchByName(struct Student* students, int size, const char* name) {
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (strcmp(students[i].name, name) == 0) {
            printf("Student found!\n");
            printf("Roll No: %d\n", students[i].rollno);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Student not found.\n");
    }
}

int main() {
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);
    getchar();  // Consume the newline character left in the buffer

    struct Student* students = (struct Student*)malloc(size * sizeof(struct Student));

    initializeArray(students, size);

    printf("\nEnter the name to search: ");
    char searchName[20];
    fgets(searchName, sizeof(searchName), stdin);
    searchName[strcspn(searchName, "\n")] = '\0';  // Remove trailing newline character

    searchByName(students, size, searchName);

    free(students);

    return 0;
}