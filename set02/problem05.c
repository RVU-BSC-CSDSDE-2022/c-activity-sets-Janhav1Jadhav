#include <stdio.h>
#include <time.h>
#include <math.h>

float get_term(int x, int i)
{
    float term;
    term = (pow(x, i) / fact((2 * i) + 1));
    return term;
}

float sum(int x)
{
    float sum = 1.0, term, prev_term = 1;
    int i = 1;
    do
    {
        term = prev_term * x / ((i + 1) * (i + 2));
        sum += term;
        prev_term = term;
        i += 2;

    } while (term > 0.000001);

    return sum;
}

int input()
{
    int x;
    printf("Enter the number to find the borga of : \t");
    scanf("%d", &x);
    return x;
}

int main()
{
    int x;
    float result;
    x = input();
    result = sum(x);
    printf("Borga is : %lf \n", result);
    return 0;
}