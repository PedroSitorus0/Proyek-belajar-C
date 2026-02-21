#include <stdio.h>

typedef struct 
{
    char brand[25];
    char model[25];
    int year;
    int price;
    char currency;
}Cars;



int main() {
    Cars cars[] = {{"Audi", "Sedan", 2022, 2000000, '$'}, {"Audi", "Sedan", 2022, 2000000, '$'}, 
                    {"Toyota", "Sedan", 2002, 21302, '$'}};
    // Cars car1 = {"Audi", "Sedan", 2022, 2000000, '$'};
    // Cars car2 =  {"Toyota", "Sedan", 2002, 21302, '$'};
    int number = sizeof(cars) /sizeof(cars[0]);

    for( int i = 0; i < number; i++)
    {
         printf("%s %s %d %c%d", cars[i].brand, cars[i].model, cars[i].year,cars[i].currency ,cars[i].price);
         printf("\n");
    }

    // printf("%s %s %d %c%d", car1.brand, car1.model, car1.year,car1.currency ,car1.price);
    return 0;
}
