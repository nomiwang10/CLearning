/* numbers.c */
#include <stdio.h>

int main()
{
  int x, y, answer;
  
 printf("Choose a number:\n");

 scanf("%d", &x);

 printf("Select another number:\n");

 scanf("%d", &y);

 answer = x + y;

 printf("The sum of these two numbers, %d and %d, is  %d\n", x, y, answer);
}
