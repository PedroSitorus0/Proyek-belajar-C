#include <stdio.h>
#include <string.h>
#include <strings.h>

int main() {
    
    int main = 0;
    char choice = '\0';
    float fahrenheit = 0.0f;
    float celsius = 0.0f;
    char symbol = '^';
    
    printf("temperature Conversion Program\n");
    printf("C. Celsium to Fahrenheit\n");
    printf("F. Fahreinheit to Celcius");
    printf("Is The temp in Celsius (C) or Fahrenheit (F)\n");
    printf("Which one you choice? (C/F): ");
    scanf("%c", &choice);

    if (choice == 'c' || choice == 'C')
    {
        printf("Enter the temperature in Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9 /5) + 32;
        printf("%c%.1f celsius is equal to %c%.1f Fahrenheit", symbol,celsius, symbol,fahrenheit);

    } else if (choice == 'f' || choice == 'F')
    {
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5/ 9;
        printf("%c%.1f Fahrenheit is equal to %c%.1f Celsius", symbol,fahrenheit, symbol,celsius);

    } else {
        printf("Invalid choise! Please select C or F\n");
        return 1;
    }
    
    

    return main;
}