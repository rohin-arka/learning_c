#include <stdio.h>
#define PI 3.141592654
double area(double radius){
  return PI * radius * radius;
}
double circumference(double radius){
  return 2.0 * PI * radius;
}
double volume(double radius){
  return 4.0 / 3.0 * PI * radius * radius * radius;
}
int main(void){
  printf("radius = 1: %.4f %.4f %.4f\n", area(1.0), circumference(1.0), volume(1.0));
}
