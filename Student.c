#include <stdio.h>
#include <string.h>

#include "Student.h"

// Initialize student profile
Student InitStudent() {
    Student student;

    strcpy(student.studentName, "Louie");
    student.studentGPA = 1.0;

    return student;
}

// Set student's name
Student SetName(char* name, Student s) {
    strcpy(s.studentName, name);

    return s;
}

// Set a student's GPA
Student SetGPA(double gpa, Student s) {
    s.studentGPA = gpa;

    return s;
}

// Returns the student's name
void GetName(char* studentName, Student s) {
    strcpy(studentName, s.studentName);
}

// Returns the student's GPA
double GetGPA(Student s) {
    double gpa;

    gpa = s.studentGPA;

    return gpa;
}
