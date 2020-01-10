#include <string.h>
#include <stdio.h>
struct Student {
  char firstname[50];
  char lastname[50];
  int age;
  int studentid;
};
void printStudent(struct Student* student)
  {
    printf("Student Information -\n");
    printf(" First name:%s\n", student->firstname);
    printf(" Last name:%s\n", student->lastname);
    printf(" Age:%d\n", student->age);
    printf(" Studentid:%d\n", student->studentid);
  }
int main() {
  struct Student StudentArray[3];
  strcpy(StudentArray[0].firstname, "Dylan");
  strcpy(StudentArray[0].lastname, "Chen");
  StudentArray[0].age = 15;
  StudentArray[0].studentid = 6495407;

  strcpy(StudentArray[1].firstname, "Ash");
  strcpy(StudentArray[1].lastname, "Marry");
  StudentArray[1].age = 14;
  StudentArray[1].studentid = 1235633;

  strcpy(StudentArray[2].firstname, "David");
  strcpy(StudentArray[2].lastname, "Kim");
  StudentArray[2].age = 16;
  StudentArray[2].studentid = 1203842;

  int i;
  for (i=0; i<3; i++)
  {
    printStudent(&StudentArray[i]);
    printf("\n");
  }
}
