//prog name: Student result calculation
//Mithuraj Boruah
//roll no- 28
//prog date: 05/11/2024
//Assignment 2
#include <stdio.h>
#include <string.h>
struct Student {
    int roll_no;
    char name[50];
    float marks[3];
};

int main() {
    struct Student student;

    printf("Enter student details:\n");

    printf("Roll Number: ");
    scanf("%d", &student.roll_no);

    printf("Name: ");
    scanf("%s", student.name);

    printf("Marks in three subjects (separated by spaces): ");
    for (int i = 0; i < 3; i++) {
        scanf("%f", &student.marks[i]);
    }

    float total_marks = 0;
    for (int i = 0; i < 3; i++) {
        total_marks += student.marks[i];
    }

    float average_marks = total_marks / 3;

    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", student.roll_no);
    printf("Name: %s\n", student.name);
    printf("Total Marks: %.2f\n", total_marks);
    printf("Average Marks: %.2f\n", average_marks);

    return 0;
}