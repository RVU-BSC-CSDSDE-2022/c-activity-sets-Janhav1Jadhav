
#include<stdio.h>
int  input_side()
{
  int side;
  printf("enter side\n");
  scanf("%d", &side);
  return side;
}
int check_scalene(int a, int b, int c)
{ 
  if (a==b || b==c || a==c)
    return 0;
  else
    return 1;
}
void output(int a, int b, int c, int flag)
{
  if( flag== 0)
    printf("the triangle with side %d, %d, %d is not scalene\n", a,b,c);
  else
    printf("the triangle with side %d, %d, and %d is scalene\n",a,b,c);
}
int main(void)
{
  int a,b,c, scalene;
  a= input_side();
  b= input_side();
  c= input_side();
  scalene= check_scalene(a,b,c);
  output(a,b,c,scalene);
  return 0;
}
