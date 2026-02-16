#include <stdio.h>
#include <string.h>
int main() {
    int a, b, c[5]; char str[10]; float f;
    printf("Enter a number: ");
    scanf("%d", &a);
    for (int i=0; i<=5; i++) {
        c[i] = i*2;
    }
    if (c[5] <= 10) {
        printf("c[5] is %d\n", c[5]); }
    else
        printf("c[5] is bigger\n"); 
    printf("Enter a float: ");
    scanf("%f", &f);
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
    printf("Enter a string: ");
    fgets( str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    int result = a + f;
    printf("Sum = %d\n", result);
    return 0;
}