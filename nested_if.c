#include <stdio.h>
#include <stdbool.h>

int main() {
    float price = 10.00;
    bool isStudent=  false ;
    bool isSenior= true;
    int yep = 0;
    char currency[10] = "Rp";
    if (isStudent)
    {
        if (isSenior)
        {
            printf("You get a senior and a student discount of 20%\n");
            price *= 0.7;
        }
        else {
        printf("you get a student discount of 10%\n");
        price *= 0.9;
        }
    } else {
        if (isSenior)
        {
            printf("You get a senior discount of 20%\n");
            price *= 0.8;
        }
        
    }

    printf("The price of a ticket is: %s%.2lf\n", currency ,price);
    return yep;
}