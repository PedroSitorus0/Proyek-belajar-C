#include <stdio.h>
#include <math.h>
#include <string.h>
#include <strings.h>

int main () {

    //compund interst calculator
    double principal = 0.0;
    double rate = 0.0;
    int timesCompounded = 0;
    double total = 0;
    int years = 0;
    char *currency = "Rp";

    printf("Compound Interest Calculator\n ");
    printf("enter the principal (P): ");
    scanf("%lf", &principal);

    printf("Enter the interst rate % (r): ");
    scanf("%lf", &rate);
    rate = rate / 100;


    printf("enter the # of years (t): ");
    scanf("%d", &years);

    printf("Enter # og times compounded per year (n): ");
    scanf("%d", &timesCompounded);

    total= principal * pow(1 + rate / timesCompounded, timesCompounded * years);
    printf("After %d years, the total will be %s%.2lf\n",years, currency ,total);
    return 0;
}