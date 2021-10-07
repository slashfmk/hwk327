#include <string.h>
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
// #include "headers//student.h"

typedef struct {
    char *name;
    double GPA;
} Student;


Student InitStudent();
Student SetName(char *name, Student s);
Student SetGPA(double gpa, Student s);
void GetName(char* studentName, Student s);
double GetGPA(Student s);

Student InitStudent(){
    Student s;
    s.name = "Louie";
    s.GPA = 1.0;
    return s;
}


Student SetName(char *name, Student s){
    s.name = name;
    return s;
}

Student SetGPA(double gpa, Student s){
    s.GPA = gpa;
    return s;
}

void GetName(char* studentName, Student s){
    strcpy(studentName, s.name);
}
double GetGPA(Student s){
    return s.GPA;
}


int main(){

    Student student = InitStudent();
    char name[20];

    GetName(name, student);
    printf("%s/%.1lf\n", name, GetGPA(student));

    student = SetName("Felix", student);
    student = SetGPA(3.7, student);
    GetName(name, student);
    printf("%s/%.1lf\n", name, GetGPA(student));

    return 0;
}