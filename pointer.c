/* pointer.c */
#include <stdio.h>
#include <string.h>

int main()
{
  char str[32];
  char *p;

  strncpy(str, "I like Apple products\n", 31);

  p = str;// p is now pointing to the beginning of the string

  // p = p + 1; // p is now pointing to the second char of the string, which is " "

  printf("%s\n", p);// print out from where p is pointing to the end of the string

  printf("%c\n", *p);// print out just the point of where p is pointing to

  return 0;
}
