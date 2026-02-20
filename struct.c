#include <stdio.h>
#include <stdbool.h>

typedef struct 
{
    char name[50];
    int age;
    int ID;
    float gpa;
    bool isFullTime;
}Student;


int main(void) {

    Student student1 = {"Pedro Armando Sitorus", 18, 2261354, 4.0, true};
    
    printf("%s\n", student1.name);
    printf("%d\n", student1.age);
    printf("%d\n", student1.ID);
    printf("%.2f\n", student1.gpa);
    printf("%i\n", student1.isFullTime);
    return 0;
}