#include <stdio.h>
int main(void){
  int ratingCounters[11], response;


  printf("Enter your responses\n");

  ratingCounters[1] = 0;

  for(int i = 1; i <= 20; i++){
    scanf("%i", &response);
    if(response < 1 || response > 10){
      printf("invalid input\n");
    }
    else{
      if(ratingCounters[response] < 1){
        ratingCounters[i] = 0;
      }
      ++ratingCounters[response];
    }
  }
  for (int i = 1;  i <= 10; i++){
    printf("%4i", i);
    printf("%10i\n", ratingCounters[i]);
  }
  return 0;
}
