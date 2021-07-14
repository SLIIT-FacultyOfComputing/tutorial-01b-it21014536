/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int i;
  float marks,tot=0,avg=0;
  for(i=0;i<2;i++){
 
      printf("enter the marks%d\t",i+1);
      scanf("%f",&marks) ;

      tot+=marks;
      

  }
  avg=tot/2;
  printf("the average is:%.2f",avg);


  
  return 0;
}

