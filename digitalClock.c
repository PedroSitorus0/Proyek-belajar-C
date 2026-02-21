#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>
// #include <windows.h> //activate this library if you using Windows

int main() {

    time_t rawtime = 0; // Jan 1 1970 (Epoch)
    struct tm *pTime = NULL;    
    bool isRunning = true;

    printf("DIGITAL CLOCK\n");

    while (isRunning)
    {
        time(&rawtime);

        pTime = localtime(&rawtime);
        printf("\r%.02d:%.02d:%.02d", pTime->tm_hour, pTime->tm_min, pTime->tm_sec);
        fflush(stdout);
        sleep(1);
        // Sleep(1000); //Activate this and disativate the sleep without the uppercase.
    }
    

    return 0;
}