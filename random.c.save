/* random.c */
#include <stdio.h>
#include <stdlib.h> 
#include <unistd.h>
#include <sys/types.h>

int our_random_function(int max)
{
  int x;
  
  x = rand() % max;

  return x;
  /*
    max = 10;
    0 1 2 3 4 5 6 7 8 9 


  if x  = rand() % max +1 ; then everything is offset by one
  */
}

int main()
{
  int random;

  srand(getpid());

  random = our_random_function(5);

  printf("%d\n", random);

  random = our_random_function(10);

  printf("%d\n", random);

  return 0;
}
