#include <stdio.h>
#include <conio.h>

typedef int bahlil;

int lala(int *a) {
 bahlil durian;
 bahlil sapi;
 char choice = '\0';
 printf("masukan nilai: ");
 scanf("%d", &durian);
 while((getchar()) != '\n');


 printf("pilih salah satu (+/-/(/)/*): ");
 scanf("%c", &choice);
 if(choice == '+') {
 sapi = (*a) + durian;
 } else if (choice == '-') {
 sapi = (*a) - durian;
 }else if(choice == '/') {
 sapi = (*a) / durian;
 } else if (choice == '*') {
 sapi = (*a) * durian;
 } else {
 printf("pilihan anda tidak valid!\n");
 }
 return sapi;
}


void main() {
 clrscr();
 bahlil ikan = 10;
 bahlil *p = &ikan;
 printf("halo dari 1992\n");
 ikan =lala(p);
 printf("lala = %d\n", ikan);
 printf("HIDUP JOKOWI!\n");
 printf("int = %d", *p);

 getch();
}