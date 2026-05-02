/* float.c */
#include <stdio.h>

int main()
{
  float pi, r, answer;

  printf("What is radius in centimeter?\n");
  scanf("%f", &r);

  pi = 3.14;
  answer = pi * r * r;
  
  printf("The answer is %f\n", answer);
 
  return 0;
}
