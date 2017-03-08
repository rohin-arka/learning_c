// invalid program
// #include <stdio.h>
// int main(void){
//   INT sum;
//   /* compute result
//   sum = 25 + 37 - 19
//   */ DISPLAY Results //
//   printf("The answer is %i\n" sum);
//   return 0;
// }
// Error in the program

  //-> at line no. 3 error: use of undeclared identifier 'INT'
  // this is because of invalid identifier capital INt. here we are trying to define
  // variable type as integer and the valid identifier is small int not INT.

  //-> at line no.6 use of undeclared identifier 'DISPLAY'
  // here DISPLAY Results is treated as identifier by compiler.
  // compiler was not smart enough to know its a comment and ignore because the comment
  // syntax ends behid the identifier.

  //-> error: expected ')'
  // this is because we are sending variable in the same parameter with space.
  // The valid syntax is to send in second parameter and the variable is not defined too.
  // It is defined but the compiler is ignoring because of comment syntax

// valid program
// loads header file
  #include <stdio.h>
  int main(void){
    // define variable sum
    int sum;
    /* compute result */
    sum = 25 + 37 - 19;
    // DISPLAY Results
    printf("The answer is %i\n", sum);
    return 0;
  }
