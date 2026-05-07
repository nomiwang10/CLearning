/* sleep.c */
#include <stdio.h>
#include <unistd.h>

int main()
{
  printf("Wait while processing... \n");
  fflush(stdout);
  sleep(2);
  printf("OK\n");

  return 0; 
}
