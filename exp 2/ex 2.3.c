#include <stdio.h>

// Define the Student structure
struct Student {
    char name[50];
    int rollNo;
    int age;
    char sex;
    char address[100];
    float marks;
};

int main() {
    int numStudents;
    scanf("%d",&numStudents);
    struct Student students[numStudents];

    // Input information for each student
    for (int i = 0; i < numStudents; i++) {
        printf("Enter information for Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Sex (M/F): ");
        scanf(" %c", &students[i].sex);
        printf("Address: ");
        scanf(" %[^\n]", students[i].address);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("Students with more than 60%% marks:\n");
    for (int i = 0; i < numStudents; i++) {
        if (students[i].marks > 60.0) {
            printf("Name: %s\n", students[i].name);
            printf("Roll No: %d\n", students[i].rollNo);
            printf("Age: %d\n", students[i].age);
            printf("Sex: %c\n", students[i].sex);
            printf("Address: %s\n", students[i].address);
            printf("Marks: %.2f\n", students[i].marks);
            printf("\n");
        }
    }

    printf("Students with more than 80%% marks:\n");
    for (int i = 0; i < numStudents; i++) {
        if (students[i].marks > 80.0) {
            printf("Name: %s\n", students[i].name);
            printf("Roll No: %d\n", students[i].rollNo);
            printf("Age: %d\n", students[i].age);
            printf("Sex: %c\n", students[i].sex);
            printf("Address: %s\n", students[i].address);
            printf("Marks: %.2f\n", students[i].marks);
            printf("\n");
        }
    }

    return 0;
}
