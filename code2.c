#include <stdio.h>

struct Student {
    char name[50];      // 50 bytes
    double gpa;         // 8 bytes

    int id;              // 4 bytes
    char grade;         // 1 byte
};

int main() {
    struct Student student;

    printf("Size of struct Student: %lu bytes\n", sizeof(student));
    printf("Address of id: %p\n", &student.id);
    printf("Address of name: %p\n", &student.name);
    printf("Address of gpa: %p\n", &student.gpa);
    printf("Address of grade: %p\n", &student.grade);

    return 0;
}
