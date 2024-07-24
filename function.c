#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int diff(int a, int b) {
    return a - b;
}

int product(int a, int b) {
    return a * b;
}

int division(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero\n");
        return 0; // Or handle error as needed
    }
}

int main() {
    int a, b;
    int choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter the operation to be performed:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("The sum is %d\n", sum(a, b));
            break;
        case 2:
            printf("The difference is %d\n", diff(a, b));
            break;
        case 3:
            printf("The product is %d\n", product(a, b));
            break;
        case 4:
            printf("The division is %d\n", division(a, b));
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
