# include <stdio.h>
#include <string.h>

int main() {
    char item[50] = "";
    float price = 0.0f;
    int quanitiy = 0;
    char *currency = "Rp";
    float total = 0.0f;
    
    printf("apa barang yang ingin anda beli? ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';
    printf("berapa harganya? ");
    scanf("%f", &price);

    printf("berapa banyak yang ingin anda beli? ");
    scanf("%d", &quanitiy);

    total =  price * quanitiy;

    
    printf("anda membeli %ssebanyak %i", item, quanitiy);
    printf("\ntotalnya ialah %s%.2fte\n", currency, total);
    return 0;
}