#include <stdio.h>
void input(float *base, float *height)
{
  printf("enter base and height \n");
  scanf("%f%f",&base,&height);
}

void find_area(float base, float height, float *area)
{
  *area=0.5 * base * height ;
} 
void output (float base, float height, float area)
{
  printf("the area of triangle with base %f and height %f is %f sq.unit \n", base, height, area);
}
int main(void)
{ 
  float base, height, area;
  input(&base, &height);
  find_area(base, height);
  output(base, height, area);
return 0;
}

