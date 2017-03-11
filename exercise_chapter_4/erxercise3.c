// Write a program that converts 27° from degrees Fahrenheit (F)
// to degrees Celsius (C) using the following formula:
// C = (F - 32) / 1.8
#include <stdio.h>
int main(void){
  // assinging farenheitDegree variable as intger data type which holds value 27;
  int farenheitDegree = 27;
  // celciusDegree variable assigning as float data type
  float celciusDegree;
  // using conversion basic algorithm deducting variable farenheitDegree with 32 and dividing with 1.8;
  // finally it celciusDegree holds float data type result since it is float.
  celciusDegree = (farenheitDegree - 32) / 1.8;

  printf("The conversion of %i farenheit degree to celcius is  = %f\n", farenheitDegree, celciusDegree);

  int farenheit_degree = 27;

  printf("The conversion of %i farenheit degree to celcius is  = %f\n", farenheit_degree, (float) (farenheit_degree - 32) / 1.8);

  return 0;
}
