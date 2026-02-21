#include <stdio.h>

int main(){
    /* w for write
       r for read 
    */

    FILE *pFile = fopen("/home/pedroarmando/Documents/output.txt", "w");
    
    char text[] = "IKAN GORENG ENAK\nMANA MAKAN SIANG GRATISNYA WOK ";

    if (pFile == NULL)
    {
        printf("ERROR OPENING FILE\n");
        return 1;
    }
    fprintf(pFile, "%s", text);

    printf("FILE WAS WRITTEM SUCCESSFULY!\n");
    
    fclose(pFile);
    return 0;
}