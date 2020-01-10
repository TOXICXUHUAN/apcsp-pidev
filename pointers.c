#include <stdio.h>

int main()
{

  int a;
  int* ptrtoa;

  ptrtoa = &a;
  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);


  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);

  float d;
  float e;
  float* ptrtod;
  float* ptrtoe;
  ptrtod = &d;
  ptrtoe = &e;
  d = 2.34;
  printf("The value of d is %f\n", d);
  e = 6.23;
  printf("The value of e is %f\n", e);
  *ptrtod = 7.3;
  printf("The value of d is %f\n", d);
  *ptrtoe = 8.5;
  printf("The value of e is %f\n", e);
  printf("The value of ptrtod is %d\n", ptrtod);
  printf("It stores the value %f\n", *ptrtod);
  printf("The address of d is %d\n", &d);

  printf("The value of ptrtoe is %d\n", ptrtoe);
  printf("It stores the value %f\n", *ptrtoe);
  printf("The address of e is %d\n", &e);

}

