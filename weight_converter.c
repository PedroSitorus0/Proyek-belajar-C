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
        printf("Enter the weight in kilograms: "); 
        scanf("%f", &kilograms);
        pounds = kilograms * 2.20462;
        printf("%.2f Kilograms is equal to %.2f Pounds.\n", kilograms,pounds);  
    } else if (choise == 2)
    {
        printf("Enter the weight in Pounds: "); 
        scanf("%f", &pounds);
        kilograms = pounds / 2.20462;
        printf("%.2f Pounds is equal to %.2f Kilograms.\n", pounds, kilograms);  
        
    } else {
        printf("Your type the wrong number, see ya!\n");
    }
    
    
    
    return 0;

}