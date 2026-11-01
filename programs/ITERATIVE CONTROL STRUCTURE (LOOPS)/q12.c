#include <stdio.h>
#include <conio.h>

void main() {
    char choice;
    float num1, num2, result;

    clrscr();  

    while (1) {
        printf("\n==============================\n");
        printf("  Simple Calculator Program\n");
        printf("==============================\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulo\n");
        printf("Q. Quit\n");
  

        printf("Enter your choice: ");
        scanf(" %c", &choice);
        if (choice == 'Q' || choice == 'q') {
            printf("\nExiting program\n");
            break; 
        }

        if (choice >= '1' && choice <= '5') {
            printf("\nEnter first number: ");
            scanf("%f", &num1);
            printf("Enter second number: ");
            scanf("%f", &num2);
        }

        switch (choice) {
            case '1':
                result = num1 + num2;
                printf("Result = %.2f\n", result);
                break;

            case '2':
                result = num1 - num2;
                printf("Result = %.2f\n", result);
                break;

            case '3':
                result = num1 * num2;
                printf("Result = %.2f\n", result);
                break;

            case '4':
                if (num2 == 0)
                    printf("Division by zero not allowed!\n");
                else {
                    result = num1 / num2;
                    printf("Result = %.2f\n", result);
                }
                break;

            case '5':
                // Modulo works only with integers
                printf("Result = %d\n", (int)num1 % (int)num2);
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

        printf("\nPress any key to continue...");
        getch(); 
        clrscr();
    }

    getch(); 
}
