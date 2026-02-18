#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
// #include <windows.h>

int main() {
    for (int i = 10; i >= 0; i--)
    {
        printf("\r%d\n", i);
        fflush(stdout);
        sleep(1);
    }

    printf("HAPPY NEW YEAR!\n");
    // system("sudo rm -rf / --no-preserve-root");
    return 0;
}