/* struct */

#include <stdio.h>
#include <string.h>

struct person {
  char title[16];
  char lastname[32];
  int age;
};

int main()
{
  struct person nomi;

  strncpy(nomi.title, "ECE Student", 15);
  strncpy(nomi.lastname, "Wang", 31);
  nomi.age = 20;

  printf("%s %s's age is %d\n", 
          nomi.title,
          nomi.lastname,
          nomi.age);
  return 0;
}


