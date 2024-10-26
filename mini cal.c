#include <stdio.h>
#include <string.h>

#define MAX_TRIES 3

// Function prototypes
int authenticate(const char *username, const char *password);
void calculator();

int main() {
    const char *username = "user";
    const char *password = "pass";
    int authenticated = 0;
    int tries = 0;

    // User authentication loop
    while (tries < MAX_TRIES && !authenticated) {
        char input_username[50];
        char input_password[50];

        printf("Enter username: ");
        scanf("%s", input_username);
        printf("Enter password: ");
        scanf("%s", input_password);

        authenticated = authenticate(input_username, input_password);
        if (!authenticated) {
            printf("Authentication failed. Try again.\n");
            tries++;
        }
    }

    if (authenticated) {
        printf("Authentication successful!\n");
        calculator();
    } else {
        printf("Too many failed attempts. Exiting...\n");
    }

    return 0;
}

// Authentication function
int authenticate(const char *username, const char *password) {
    return strcmp(username, "user") == 0 && strcmp(password, "pass") == 0;
}

// Calculator function
void calculator() {
    int choice;
    double num1, num2, result;

    do {
        printf("\nSimple Calculator\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Select an operation: ");
        scanf("%d", &choice);

        if (choice == 5) {
            break;
        }

        printf("Enter first number: ");
        scanf("%lf", &num1);
        printf("Enter second number: ");
        scanf("%lf", &num2);

        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Result: %.2lf\n", result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result: %.2lf\n", result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result: %.2lf\n", result);
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2lf\n", result);
                } else {
                    printf("Error: Division by zero!\n");
                }
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (1);
}
