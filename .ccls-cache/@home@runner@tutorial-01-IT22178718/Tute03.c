/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>

int main(void) {
 int sum,n,p;
  printf("Enter a value for n: ");
  scanf("%d",&n);

  
  sum=0;
  p=1;
  for(p=1;p<=n;p++)
    {
      sum=sum+p;
       
    }

  printf("Sum=%d",sum);
  return 0;
}
