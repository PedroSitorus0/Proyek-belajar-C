#include <stdio.h>
#include <ctype.h>

int main(void) {

    char questions[][100]= {"siapa presiden pertama Indonesia?",
                            "Tahun berapa Indonesia Merdeka?"};

    char options[][100] = {"A. Soekarno\nB. Megawati\nC. Tan Malaka\nD.Patimura",
                            "A. 1967\nB. 1998\nC. 1945\nD. 1948"};

    char answerKey[] = {'A', 'C'};
    char answerKeyLowCase[] = {'a', 'b', 'c', 'd'};

    int questionsCount = sizeof(questions) / sizeof(questions[0]);
    int optionsCount = sizeof(options) / sizeof(options[0]);

    char guess = '\0';
    char score = 0;

    for (int i = 0; i < questionsCount; i++)
    {
        printf("%s\n", questions[i]);
        printf("%s\n", options[i]);
        printf("\nmasukan pilihan anda: ");
        scanf(" %c", &guess);

        if (toupper(guess) == answerKey[i])
        {
            printf("JAWABAN ANDA BENAR!!!\n");
            score++;
        } else {
            printf("MAAF, JAWABAN ANDA SALAH.\n");
            printf("Jawaban yang benar adalah %c\n\n", answerKey[i]);
        }
        
        
        
    }   
    
    printf("Skor Anda: %d dari %d\n", score, questionsCount);
    
    return 0;

}