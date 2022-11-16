#include<stdio.h>

int input_array_size()
{
  int n;
  printf("enter array size \n");
  scanf("%d",&n);
  return n;
}

void input_array(int n, int a[n])
{
  for(int i=0, i<n, i++)
    {
    printf("entre next element \n");
    scanf("%d",&a[i]);
    }
}

int is_composite(int n)
{
  for (int i=2; i<n; i++) 
   {
     if(n %i == 0)
       return 1;
   }
  return 0;
}

int sum_composite_number(int n, int a[n])
{ 
  int sum=0;
  for(int i=0; i<n; i++)
    if(is_compositea[i]==10
      sum+=a[i];
  return sum;
}

void output (int sum)
{
  printf("the sum of composite numbers is %d \n", sum);
}

int main()
{
  int n;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  int sum=sum_composite_number(n,a);
  output(sum);
  return 0;
}