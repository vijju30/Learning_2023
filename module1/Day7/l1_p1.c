#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseString(const char* inputString, struct Student* students, int size) {
    char* token;
    char* rest = strdup(inputString);
    
    // Parse rollno
    token = strtok(rest, " ");
    students->rollno = atoi(token);
    
    // Parse name
    token = strtok(NULL, " ");
    strncpy(students->name, token, sizeof(students->name) - 1);
    students->name[sizeof(students->name) - 1] = '\0';
    
    // Parse marks
    token = strtok(NULL, " ");
    students->marks = atof(token);
}

int main() {
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);
    getchar();  // Consume the newline character
    
    struct Student* students = (struct Student*)malloc(size * sizeof(struct Student));
    
    printf("Enter the student details (rollno name marks):\n");
    for (int i = 0; i < size; i++) {
        char inputString[100];
        fgets(inputString, sizeof(inputString), stdin);
        parseString(inputString, &students[i], 1);
    }
    
    // Print the student details
    printf("\nStudent Details:\n");
    for (int i = 0; i < size; i++) {
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
    
    free(students);
    return 0;
}
