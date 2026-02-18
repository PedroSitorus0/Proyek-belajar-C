#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getComputerChoice();
int getUserChoice();
int checkWinner(int userChoice, int computerChoice);

int main() {
    
    srand(time(NULL));

    printf("PERMAINAN KERTAS GUNTING BATU\n");
    int userChoice =getUserChoice();
    int computerChoice = getComputerChoice();

    switch (userChoice)
    {
    case 1:
        printf("kamu memilih batu!\n");
        break;
    case 2:
        printf("kamu memilih gunting\n");

    case 3:
        printf("kamu memilih kertas\n");
        break;
    default:
        break;
    }

    switch (computerChoice)
    {
    case 1:
        printf("komputer memilih batu!\n");
        break;
    case 2:
        printf("komputer memilih gunting\n");

    case 3:
        printf("komputer memilih kertas\n");
        break;
    default:
        break;
    }

    
    checkWinner(userChoice, computerChoice);
    return 0;
}

int getComputerChoice() {
    return (rand() % 3) +1;
}
int getUserChoice() {

    int choice = 0; 
    do
    {
        printf("Pilih salah satu: \n");
        printf("1. batu\n");
        printf("2. gunting\n");
        printf("3. kertas\n");
        printf("Masukan pilihan anda: ");
        scanf("%d", &choice);


    } while (choice < 1 || choice > 3);
    
    return choice;
}
int checkWinner(int userChoice, int computerChoice) {
    if (userChoice == computerChoice)
    {
        printf("kalian imbang!\n");
    } else if ((userChoice ==1 && computerChoice ==2) ||
                (userChoice == 2 && computerChoice == 3) ||
                (userChoice == 3 && computerChoice == 1)) {
        printf("anda menang!\n");
    } else if ((userChoice ==2 && computerChoice ==1) ||
                (userChoice == 3 && computerChoice == 2) ||
                (userChoice == 1 && computerChoice == 3))
    {
        printf("skill issue! anda kalah\n");
    }
    
    
    
    
}
