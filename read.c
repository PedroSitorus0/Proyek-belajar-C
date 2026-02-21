#include <stdio.h>

int main(){

    FILE *pFile = fopen("/home/pedroarmando/Documents/output.txt", "r");
    char buffer[512] = {0};

    if (pFile == NULL)
    {
        printf("Could not open file\n");
        return 1;
    } else {
    }

    while (fgets(buffer, sizeof(buffer), pFile) != NULL)
    {
        printf("%s", buffer);
    }
    
    

    fclose(pFile);

    return 0;
}