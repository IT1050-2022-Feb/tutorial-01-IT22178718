/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */
#include <stdio.h>

int main(void) {
  int num1,num2;
  printf("Enter mark1: ");
  scanf("%d",&num1);
  printf("Enter mark2: ");
  scanf("%d",&num2);

 int sum=num1+num2;
  float average=(float)sum/2;

  printf("Average: %.2f",average);
}