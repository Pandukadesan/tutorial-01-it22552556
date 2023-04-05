/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the
   average of the two marks. */

#include <stdio.h>

int main(void) {
  int mark1, mark2, average;

  printf("Enter the mark 1 : ");
  scanf("%d", &mark1);

  printf("Enter the mark 2 : ");
  scanf("%d", &mark2);

  average = (mark1 + mark2) / 2;

  printf("The average is : ", average);

  return 0;
}