/* switch */
#include <stdio.h>

int main()
{
  int x;

  printf("Choose between: 1. Apples, 2. Bananas, 3.Strawberries\n");
  scanf("%d",&x);

  /* Equivalent example of using if-else statement
  if(x==1)
  {
     printf("choosed apples\n");
  }
  else if (x==2)
  {
    printf("choosed bananas\n");
  }
  else
  {
    printf("choose strawberries\n");
  }
  */

  /* Using Switch */

  switch(x)
  {
    case 1:
      printf("Apples\n");
      break; 
    case 2:
      printf("Bananas\n");
      break;
    case 3:
      printf("SB\n");
      break;
    default:
      printf("Nothing\n");
      break;
  }

  return 0;
}
