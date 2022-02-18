/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() 
{
  int num, total = 0, i;
  
  printf("Enter the number : "); //promt input
  scanf("%d", &num); //read the number
  
  for(i = 1; i <= num; i++)
  {
    total = total + i; //Calculate the sum of numbers
  }
  printf("Sum of the numbers : %d", total); //Display total
  
  return 0;
}//End of main function

