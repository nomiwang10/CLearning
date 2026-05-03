/* if.c */
#include <stdio.h>

int main()
{
  int speed;
  printf("How fast are you driving?\n");
  scanf("%d", &speed);

  if(speed > 100)
  {
    printf("You are driving too fast. \n");
  }
  else
  {
    printf("OK\n");
  }

  return 0;
}
