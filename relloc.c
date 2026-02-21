#include <stdio.h>
#include <stdlib.h>

typedef int Numbers;

int main(void) {

    Numbers number = 0;
    printf("Enter the Numbers of prices: ");
    scanf("%d", &number);

    float *prices = malloc(number * sizeof(float));

    if (prices == NULL)
    {
        printf("Memmory Allocation Failed!\n");
        return 1;
    }
    
    for (int i = 0; i < number; i++)
    {
        printf("Enter price #%d: ", i + 1);
        scanf("%f", &prices[i]);
    }

    Numbers newNumber = 0;
    printf("Enter a new number of prices: ");
    scanf("%d", &newNumber);

    float *temp = realloc(prices, newNumber * sizeof(float));

    if (temp == NULL)
    {
        printf("Could not reallocate memory!\n");
        return 1;
    } else{
        prices = temp;
        temp = NULL;
        if (newNumber < number)
        {
            printf("Invalid!");
            printf("The size of memory is %d but your input is %d\n", newNumber, number);
            return 1;
        }
        
        for (int i = number; i < newNumber; i++)
    {
        printf("Enter price #%d: ", i + 1);
        scanf("%f", &prices[i]);
    }
    for (int i = 0; i < newNumber; i++)
    {
        printf("$%.2f\n", prices[i]);
        
    }
    
    }
    
    


    free(prices);
    prices = NULL;


    return 0;
}