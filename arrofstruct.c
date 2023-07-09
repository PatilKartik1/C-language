#include <stdio.h>
#include <string.h>

struct student
{
    int roll;
    float cgpa;
    char name[100];
};

typedef struct computerscienceengeneering
{
    int roll;
    float cgpa;
    char name[100];
} cse;

int main()
{
    cse s1 = {4074, 9.8, "Kartik"};

    printf("Name = %s\n", s1.name);
    printf("cgpa is %f\n", s1.cgpa);
    printf("Roll no is %d\n", s1.roll);

    // struct student s1 = {4001, 8.7, "Hardik"};
    // printf("roll no is %d\n", s1.roll);

    // pointer of structure

    // struct student *ptr;
    // ptr = &s1;
    // printf("roll no is %d\n", ptr->roll);

    // struct student ece[100];
    // ece[0].roll = 4001;
    // ece[0].cgpa = 8.9;
    // strcpy(ece[0].name, "Hardik");

    // printf("Name = %s\n", ece[0].name);
    // printf("cgpa is %f\n", ece[0].cgpa);
    // printf("Roll no is %d\n", ece[0].roll);

    // ece[1].roll = 4019;
    // ece[1].cgpa = 8.4;
    // strcpy(ece[1].name, "Aditya");

    // printf("Name = %s\n", ece[1].name);
    // printf("cgpa is %f\n", ece[1].cgpa);
    // printf("Roll no is %d\n", ece[1].roll);

    // ece[2].roll = 4074;
    // ece[2].cgpa = 9.8;
    // strcpy(ece[2].name, "Kartik");

    // printf("Name = %s\n", ece[2].name);
    // printf("cgpa is %f\n", ece[2].cgpa);
    // printf("Roll no is %d\n", ece[2].roll);

    return 0;
}