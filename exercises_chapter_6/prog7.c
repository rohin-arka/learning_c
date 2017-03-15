#include <stdio.h>
int main(void){
  float value1, value2, result;
  char inputOperator;
  printf("enter the number with operator as 2+2 \n");
  scanf("%f %c %f", &value1, &inputOperator, &value2);
  if (inputOperator == '+'){
    result = value1 + value2;
  } else if (inputOperator == '-'){
    result = value1 - value2;
  } else if (inputOperator == '*'){
    result = value1 * value2;
  } else if (inputOperator == '/'){
    result = value1 / value2;
  }
  printf("%f %c %.2f = %f\n", value1, inputOperator, value2, result);
  return 0;
}
