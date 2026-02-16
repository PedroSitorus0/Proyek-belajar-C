#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <strings.h>

int main () {
    int yep = 0;
    char operator ='\0';
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;    

    printf("Enter the first number: ");
    scanf("%lf", &num1 );

    printf("Enter the operator(+ || - || * || /): ");
    scanf(" %c", &operator ); // clear the new line character from input buffer

    printf("Enter the second number: ");
    scanf("%lf", &num2 );


    switch (operator)
    {
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
        if (num2 || num2 == 0)
        {
            printf("You can't divide by zero!\n");
        } else {
            result = num1 / num2;
        }
        
        break;
    default:
        printf("please input the right operator.\n");
        break;
    }

    printf("Result: %.0lf\n", result);



    return yep;
}   