#include <stdio.h>
#include <stdbool.h>

int main() {
    float price = 10.00;
    bool isStudent = true;
    int yep = 0;
    char currency[10] = "Rp";
    if (isStudent)
    {
        printf("you get a student discount of 10%");
        price *= price;
    }   

    printf("The price of a ticket is: %s%.2lf", currency ,price);
    return yep;
}