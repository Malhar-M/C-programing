/*To simulate a simple calculator that performs basic tasks such as addition, subtraction,
multiplication and division with special operations like computing xy and x!*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(void) {
    char choice;
    char response[10];
    bool isFactorial = false;

    printf("Do you want to calculate a Factorial (x!)? (Yes/No): ");
    scanf("%s", response);
    if (strcmp(response, "Yes") == 0 || strcmp(response, "yes") == 0) {
        isFactorial = true;
    }

    if (isFactorial) {
        int x;
        long long fact = 1;
        printf("Enter an integer to find factorial: ");
        scanf("%d", &x);

        if (x < 0) {
            printf("Error: Factorial of negative numbers doesn't exist.\n");
        } else {
            for (int i = 1; i <= x; i++) {
                fact *= i;
            }
            printf("%d! = %lld\n", x, fact);
        }
    } 
    else {
        double num1, num2, result;
        printf("\nSelect Operation:\n");
        printf("(+) Addition\n(-) Subtraction\n(*) Multiplication\n(/) Division\n(p) Power (x^y)\n");
        printf("Choice: ");
        scanf(" %c", &choice);

        printf("Enter first number (x): ");
        scanf("%lf", &num1);
        printf("Enter second number (y): ");
        scanf("%lf", &num2);

        switch (choice) {
            case '+': 
                printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2); 
                break;
            case '-': 
                printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2); 
                break;
            case '*': 
                printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2); 
                break;
            case '/': 
                if (num2 != 0)
                    printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
                else
                    printf("Error: Division by zero!\n");
                break;
            case 'p': {
                double p_res = 1;
                for (int i = 0; i < (int)num2; i++) {
                    p_res *= num1;
                }
                printf("%.2lf raised to the power %.0lf = %.2lf\n", num1, num2, p_res);
                break;
            }
            default: 
                printf("Invalid operation selected.\n");
        }
    }

    return 0;
}
