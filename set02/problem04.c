#include<stdio.h>

void input_camel_details(float *radius,float *height,float *length)
{
  printf("Enter the radius\n");
  scanf("%f",radius);

  printf("Enter the height\n");
  scanf("%f",height);

  printf("Enter the length\n");
  scanf("%f",length);
  }

int find_mood(float radius, float height, float length)
{
  if (radius<height && radius <length)
  {
    return 0;
  }
  else if ( height<length  && height<radius)
    { 
    return 1;
    }
  else {
    return 2;
    }
}

void output(float radius, float height, float length, int mood) {
  if(mood==0)
{    printf("camel is sick 🤡");
}  else if (mood ==1){
    printf(" camel is happy 😏");}
  else if (mood ==2)
{    printf("camel is tensed 🥺");
}
  else{
    printf("you are dumb 👽✨");
  }
  }
int main()
{
  float radius, height, length;
  input_camel_details(&radius, &height, &length);
  int mood;
  mood=find_mood(radius,height,length);
  output(radius,height, length, mood);
  return 0;
}