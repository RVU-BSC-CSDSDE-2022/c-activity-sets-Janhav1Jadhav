#include <stdio.h>
int input_n()
{
  int n;
  printf("Enter n\n");
  scanf("%d",&n);
  return n;
}

void print_fibo(int n)
{
  int a=0;
  int b=1;
  int next;  
  printf("%d , %d , ",a,b);
  for(int i=0;i<n;i++) 
  {
    next = a+b;
    printf("%d , ",next);
    a = b;
    b = next;
    }
  
}


int main(void) {
  int  n = input_n();
  print_fibo(n);
  return 0;
}