/*Assignment -1*/
/*Date-26/9/2024*/
// Mithuraj Boruah
//Roll no; 28

#include <stdio.h>
int add(int a, int b) {
    return a + b;
}
void subtract(int a, int b) {
    printf("Result: %d\n", a - b);
}
int multiply() {
    int a, b;
    printf("Enter two numbers for multiplication: ");
    scanf("%d %d", &a, &b);
    return a * b;
}

void divide() {
    int a, b;
    printf("Enter two numbers for division: ");
    scanf("%d %d", &a, &b);
    if (b != 0)
        printf("Result: %.2f\n", (float)a / b);
    else
        printf("Error: Division by zero is not allowed.\n");
}

int main() {
    int choice, a, b;
    char cont;
    
    do {
        printf("\nSimple Calculator\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                
                printf("Enter two numbers for addition: ");
                scanf("%d %d", &a, &b);
                printf("Result: %d\n", add(a, b));
                break;
            case 2:
                printf("Enter two numbers for subtraction: ");
                scanf("%d %d", &a, &b);
                subtract(a, b);
                break;
            case 3:
                printf("Result: %d\n", multiply());
                break;
            case 4:
                divide();
                break;
            default:
                printf("Invalid choice! Please enter a number between 1 and 4.\n");
        }
        
        printf("\nDo you want to perform another operation? (y/n): ");
        scanf(" %c", &cont);
        
    } while (cont == 'y' || cont == 'Y');
    
    printf("Thank you for using the calculator!\n");
    return 0;
}