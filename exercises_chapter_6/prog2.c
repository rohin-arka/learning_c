/* Program to calculate the average of a set of grades
and count the number of failing test grades */
#include <stdio.h>
int main(void){
  int numberOfGrades, totalGrade, grade, totalFailed;
  totalGrade = 0, totalFailed = 0;
  float average;
  printf("Enter the number of grades you want to calculate\n");
  scanf("%i", &numberOfGrades);
  for(int i = 1; i <= numberOfGrades; ++i){
    printf("Enter the grade for %i\n", i);
    scanf("%i", &grade);
    if (grade < 35){
      totalFailed ++;
    }
    totalGrade = totalGrade + grade;
  }

  average = totalGrade / numberOfGrades;

  printf("The total grade is %i\n", totalGrade);
  printf("The average grade is %.2f\n", average);
  return 0;
}
