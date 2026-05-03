/* while.c */

#include <stdio.h>

int main()
{
  int x = 0;
  while(x == 0)
  {
    printf("Do you want to quit? If so, please press 1\n");
    scanf("%d", &x);   
  }
  printf("You break out from the loop. Woooo!!!\n");
  return 0;
}
