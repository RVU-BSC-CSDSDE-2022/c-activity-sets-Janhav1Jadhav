#include<stdio.h>
typedef struct _triangle
{
float base, altitude, area;
}
Triangle;

Triangle input_triangle()
{
  Triangle T;
  printf("enter the base of Triangle\n ");
  scanf("%f", &T.base);
  printf("enter the altitude  of Triangle\n ");
  scanf("%f", &T.altitude);
}

void find_area(Triangle *t)
{
  t->area=0.5*(t->base)*(t->altitude);
}

void output(Triangle t)
{
  printf(" the area of triangle is %f",t.area);
}
int main()
{
  Triangle T;
  T = input_triangle();
  find_area(&T);
  output(T);
  return 0;
}

