// Write a C program to print the following characters in a reverse way.
// Test Characters : 'X', 'M', 'L'
// The reverse of XML is LMX


#include <stdio.h>
void reverse(char a, char b, char c){
  printf("Your input character %c%c%c\n", a, b, c);
  printf("The reverse form of input is %c%c%c\n", c, b, a);
}
int main(void){
  reverse('X', 'M', 'L');
}
