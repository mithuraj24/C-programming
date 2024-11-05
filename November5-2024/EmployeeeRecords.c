//prog name: Employee Record System
//Mithuraj Boruah
//roll no- 28
//prog date: 05/11/2024
//Assignment 1
#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    int age;
    float salary;
};

int main() {
    int n, i;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee employees[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &employees[i].id);

        printf("Enter Name: ");
        scanf("%s", employees[i].name);

        printf("Enter Age: ");
        scanf("%d", &employees[i].age);

        printf("Enter Salary: ");
        scanf("%f", &employees[i].salary);
    }

    printf("\nEmployee Details:\n");
    printf("-------------------------------------------------\n");
    printf("| ID\t| Name\t\t| Age\t| Salary\t|\n");
    printf("-------------------------------------------------\n");

    for (i = 0; i < n; i++) {
        printf("| %d\t| %s\t\t| %d\t| %.2f\t|\n", employees[i].id, employees[i].name, employees[i].age, employees[i].salary);
    }

    printf("-------------------------------------------------\n");

    return 0;
}