#include <stdio.h>
void input(int*a,int*b, int*c)
{
  printf("enter numbers");
  scanf("%d %d %d",a,b,c);
}
int compare(int a, int b, int c)
{
  if(a>b && a>c){
    return a;
  }
  else if(a<b && b>c){
     return b;
  }
  else{
    return c;
  }
}
int main()
{
  int x,y,z,h;
  input(&x,&y,&z);
  h =compare(x, y, z);
  printf("the largest number among %d, %d and %d is %d ",x,y,z,h);
  return 0;
}