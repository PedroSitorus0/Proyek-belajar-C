#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// double cube(double num) {
//     return num * num *num;
// }

// double square(double num) {
//     return num * num;
// }
bool ageCheck(int age) {
    if(age >= 18) {
        return true;
    } else {
        return false;
    }
}



int main(void) {
    int yep = 0;
    // double x = cube(2.1);
    // double y = cube(23.4);
    // double z = cube(5.4);

    // printf("%.2lf\n", x);
    // printf("%.2lf\n", y);
    // printf("%.2lf\n", z);

    int age;

    printf("enter your age: "); scanf("%d", &age);

    if (ageCheck(age))
    {
        printf("you should sign up\n");
        printf("your age is %d\n", age);
    } else {
        return 1;
    }
    
    
    return 0;
}