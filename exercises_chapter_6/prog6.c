#include <stdio.h>
int main(void){
  char c;
  printf("Enter character or integer \n");
  scanf("%c", &c);
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
    printf("Its a character\n");
  }else if (c >= '0' && c <= '9'){
    printf("The number is integer\n");
  }
  else{
    printf("It seems like special character\n");
  }
  return 0;
}
