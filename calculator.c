#include <stdio.h>

int main() {
    char op; //the vars that we are going to need for the calculator
    double num1, num2, result;



    printf("Enter an op (+, -, *, /): ");
    scanf("%c", &op);
 // here we are asking the user for three things: what mathamatical operation they want to do and the two numbers that will be used. There is a max of two numbers here.
    printf("Enter the numbers: ");
    scanf("%lf %lf", &num1, &num2);



    switch (op) { //this switch statement avoids a lot of if then statements. checks for what operator was selected.
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                break;}
            else {
                printf("System Error: Division by zero is not allowed.\n");
                return 1; // Exit program with an error code
            }

        default:
            printf("System Error: Invalid op.\n");
            return 1; // Exit program with an error code
    }

    printf("%.2lf %c %.2lf = %.2lf\n", num1, op, num2, result); //and now to return the results.

    return 0;
}
