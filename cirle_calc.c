#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <math.h>
#include <stdlib.h>

int main () {

    double radius = 0.0;
    double area = 0.0;
    const double PI = 3.14159;
    double volume = 0.0;
    double surfaceArea = 0.0;
    char *satuan = "cm";

    printf("enter the radius: ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);
    surfaceArea = 4 * PI * pow(radius, 2);
    volume = (4.0 /3.0 ) * PI * pow(radius,2);

    printf("area: %.2lf%s \n", area, satuan);
    printf("Surface Area: %.2lf%s\n", surfaceArea, satuan);
    printf("Volume: %.2lf%s\n", volume, satuan);


    return 0;
}