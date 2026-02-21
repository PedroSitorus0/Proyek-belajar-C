#include <stdio.h>
#include <stdlib.h>

int main() {

    int number = 0;
    printf("Enter the number of grades: ");
    scanf("%d", &number);

    int *grades = malloc(number * sizeof(char));

    int size = sizeof(grades) /sizeof(grades[0]);

    if (grades == NULL)
    {
        printf("MEMORY ALLOCATION FAILED\n");
        return 1;
    }
    
    for (int i = 0; i < number; i++)
    {
        printf("ENTER GRADE #%d: ", i+1);
        scanf(" %c",&grades[i]);
    }

    for (int i = 0; i < number; i++)
    {
        printf("%c ", grades[i]);
    }
    
    

    free(grades); //renturning "rented" space back to the OS
    grades = NULL; // avoids dangaling pointers
    return 0;
}