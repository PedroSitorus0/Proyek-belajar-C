#include <stdio.h>


int main(void) {

    int numbers[] = {1,2, 3, 4, 6, 7};
    // numbers [49] = 99;
    char name[] = "Pedro Armando Sitorus";
    // printf("%d\n", numbers[5]);
    // size_t ikan = sizeof(numbers) /  sizeof(numbers[0]);
    // printf("%d\n", ikan);
    // printf("%d", numbers[49]);
    int data[1000] = {5, 2, 8, 1, 4, -1};  // -1 sebagai penanda akhir
// for (int i = 0; numbers[i] != -1; i++) {
//     printf("%d ", numbers[i]);
// }

/*for (int i = 0;data[i] != -1; i++)
{
    printf(" %d\n", data[i]);
} */

    // printf("%d\n", sizeof(data));
    // printf("%d\n", sizeof(data[2]));
    // int size = sizeof(numbers) /  sizeof(numbers[0]);
    for (int i = 0; i < sizeof(numbers) /  sizeof(numbers[0]); i++)
    {
        printf("%d", numbers[i]);
    }
    
    return 0;
}