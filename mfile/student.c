#include <stdio.h>
#include "student.h"
void printStudent(struct Student* student) 
  {
    printf("Student Information -\n");
    printf(" First name:%s\n", student->firstname);
    printf(" Last name:%s\n", student->lastname);
    printf(" Age:%d\n", student->age);
    printf(" Studentid:%d\n", student->studentid);
  }
