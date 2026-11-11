// Zia Anderson
// Chpt 7 PA

#ifndef STUDENT_H
#define STUDENT_H

#include <string.h>

// Define the struct
typedef struct Student_struct {

    char studentName[20];
    double studentGPA;

} Student;

// Define related functions
Student InitStudent();
Student SetName(char* name, Student s);
Student SetGPA(double gpa, Student s);
void GetName(char* studentName, Student s);
double GetGPA(Student s);

#endif
