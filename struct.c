#include <stdio.h>
#include <stdbool.h>
#include <string.h>


typedef struct 
{
    char name[50];
    int age;
    int ID;
    float gpa;
    bool isFullTime;
}Student;
void printStudent(Student student);

int main(void) {

    Student student1 = {"Pedro Armando Sitorus", 18, 2261354, 4.0, true};
    Student student2 = {"Abdul", 18, 226324423, 3.3,true};
    Student student3 ={0};

    strncpy(student3.name, "Ikan", 5);
    // printf("%s", student3.name);
    // printf("\n");
    printStudent(student1);
    printStudent(student2);
    printStudent(student3);
    return 0;
}



void printStudent(Student student) {
    printf("%s\n", student.name);
    printf("%d\n", student.age);
    printf("%d\n", student.ID);
    printf("%.2f\n", student.gpa);
    printf("%s\n", (student.isFullTime) ? "Aktif" : "Tidak Aktif");
    printf("\n");


}