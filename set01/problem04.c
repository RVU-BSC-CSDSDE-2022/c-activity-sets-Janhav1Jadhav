#include <stdio.h>
int input(int*a,int*b)
{
  printf("enter two numbers");
  scanf("%d%d",a,b);
}
void add(int a, int b, int *c)
{
  *c=a+b;
}
int main()
{
  int x,y,z;
  input(&x,&y);
  add(x,y,&z);
  printf("%d + %d = %d\n",x,y,z);
  return 0;
}