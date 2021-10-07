//
// Created by Yannick Fumukani on 9/27/21.
//

#ifndef HWKTEST_STUDENT_H
#define HWKTEST_STUDENT_H

#include <string.h>

 typedef struct {
    char *name;
    double GPA;
} Student;

 Student InitStudent();
 Student SetName(char *name, Student s);
 Student SetGPA(double gpa, Student s);
void GetName(char* studentName, Student s);
double GetGPA(Student s);

#endif //HWKTEST_STUDENT_H
