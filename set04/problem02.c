#include <stdio.h>
#include <math.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
  printf("Enter the value of x1\n");
  scanf("%f", x1);
  printf("Enter the value of y1\n");
  scanf("%f", y1);
  printf("Enter the value of x2\n");
  scanf("%f", x2);
  printf("Enter the value of y2\n");
  scanf("%f", y2);
  printf("Enter the value of x3\n");
  scanf("%f", x3);
  printf("Enter the value of y3\n");
  scanf("%f", y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
  float calc;
  calc = x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2);
  return calc;
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result)
{
  if(result!=0)
    printf("It forms a triangle\n");
    
  else
    printf("It does not form a triangle/n");
}
int main()
{
  float x1, x2, y1, y2, x3, y3, result;
  input_triangle(&x1, &y1, &x2, &y2, &x3, &y3);
  result = is_triangle(x1, y1, x2, y2, x3, y3);
  output(x1, y1, x2, y2, x3, y3, result);
  return 0;
}