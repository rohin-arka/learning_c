// Write a C program to print your name, date of birth. and mobile number.
// Name   : Alexandra Abramov
// DOB    : July 14, 1975
// Mobile : 99-9999999999

#include <stdio.h>
int main(void){
  char name[20], dob[20], mobile[20];

  printf("Enter your name\n");
  scanf("%s", name);

  printf("Enter your date of birth\n");
  scanf("%s", dob);

  printf("Enter your mobile\n");
  scanf("%s", mobile);

  printf("Name   : %s\n", name);
  printf("DOB    : %s\n", dob);
  printf("mobile : %s\n", mobile);
}
