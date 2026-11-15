#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    printf("================================\n");
    printf("       SIMPLE CALCULATOR        \n");
    printf("================================\n");
    printf("Name: Shambhavi Chouhan\n\n");

    printf("Select an Operation:\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Modulus (%%)\n");

    printf("\nEnter your choice (1-5): ");
    scanf("%d", &choice);

    printf("\nEnter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    switch (choice) {

        case 1:
            result = num1 + num2;
            printf("\nAddition: %.2f + %.2f = %.2f\n",
                   num1, num2, result);
            break;

        case 2:
            result = num1 - num2;
            printf("\nSubtraction: %.2f - %.2f = %.2f\n",
                   num1, num2, result);
            break;

        case 3:
            result = num1 * num2;
            printf("\nMultiplication: %.2f * %.2f = %.2f\n",
                   num1, num2, result);
            break;

        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                printf("\nDivision: %.2f / %.2f = %.2f\n",
                       num1, num2, result);
            } else {
                printf("\nError! Division by zero is not allowed.\n");
            }
            break;

        case 5:
            if (num2 != 0 && num1 == (int)num1 &&
                num2 == (int)num2) {
                printf("\nModulus: %d %% %d = %d\n",
                       (int)num1, (int)num2,
                       (int)num1 % (int)num2);
            } else {
                printf("\nError! Modulus requires non-zero integer operands.\n");
            }
            break;

        default:
            printf("\nInvalid choice! Please select between 1 and 5.\n");
    }

    printf("\n================================\n");
    printf("       THANK YOU FOR USING      \n");
    printf("================================\n");

    return 0;
