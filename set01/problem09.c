#include <stdio.h>
#include <math.h>

float input(float);
float input(float a)
{
    float b;
    b=sqrt(a);
    return b;
}

void output(float,float);
void output(float c,float d)
{
    printf("The square root of %.0f is %.2f",c,d);
}

int main()
{
    float n,s;
    printf("Enter the number you want square root of ");
    scanf("%f",&n);
    s=input(n);
    output(n,s);
    return 0;
}