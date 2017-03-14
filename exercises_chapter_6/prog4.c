#include <stdio.h>
int main(void){
  int year, rem_4, rem_100, rem_400;
  printf("Enter the year to be tested\n");
  scanf("%i", &year);

  rem_4 = year % 4;
  rem_100 = year % 100;
  rem_400 = year % 40;

  if((rem_4 == 0 && rem_100 != 0) || rem_400 == 0)
    printf("its a leap year\n");
  else
    printf("its not a leap year\n");

  return 0;
}
