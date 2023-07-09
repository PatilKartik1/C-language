#include <stdio.h>
#include <string.h>

struct student
{
    int roll;
    float cgpa;
    char name[100];
};

int main()
{

    struct student s1;

    s1.roll = 4001;
    s1.cgpa = 8.6;
    strcpy(s1.name, "Hardik");

    printf("Student roll no is %d\n", s1.roll);
    printf("Student cgpa is %f\n", s1.cgpa);
    printf("Student name is %s\n", s1.name);

    struct student s2;
    s2.roll = 4019;
    s2.cgpa = 9.8;
    strcpy(s2.name, "Aditya");

    printf("Student roll no is %d\n", s2.roll);
    printf("Student cgpa is %f\n", s2.cgpa);
    printf("Student name is %s\n", s2.name);

    struct student s3;
    s3.roll = 4074;
    s3.cgpa = 9.9;
    strcpy(s3.name, "Kartik");

    printf("Student roll no is %d\n", s3.roll);
    printf("Student cgpa is %f\n", s3.cgpa);
    printf("Student name is %s\n", s3.name);

    return 0;
}