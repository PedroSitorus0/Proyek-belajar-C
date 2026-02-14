#include <stdio.h>
#include <strings.h>
#include <string.h>


int main () {

    int choise = 0;
    float pounds = 0.0f;
    float kilograms = 0.0f;

    printf("weight Conversion Calculator\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");
    printf("Enter tour choise (1 or 2): ");
    scanf("%d", &choise);
     
    if (choise == 1)
    {
        printf("Enter the weight in kilograms: \n");   
    } else if (choise == 2)
    {
        printf("Enter the weight in Pounds: \n");
           
        
    } else {
        printf("Your type the wrong number, see ya!\n");
    }
    
    
    
    return 0;

}