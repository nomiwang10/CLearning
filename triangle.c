/* triangle.c */
#include <stdio.h>

double  area_triangle(int base, int height)
{
  double area = base * height / 2;
  return area;
}

int main()
{
  int b; //base
  int h; //height
  double a; //area

  printf("Base: ");
  fflush(stdout);
  scanf("%d",&b);

  printf("Height: ");
  fflush(stdout);
  scanf("%d",&h);

  a = area_triangle(b,h);
  printf("The area is %f\n", a);

  return 0;
}
