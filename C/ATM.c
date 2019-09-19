#include<stdio.h>
#include <stdlib.h>
int main()
{
  int x;
  float y,z;
  scanf("%d %f",&x,&y);

    if(x%5==0)
    {
      z=y-(x+0.50);
      if(z>0)
      {
        printf("%f",z);
      }
      else
      printf("%f",y);
    }
    else
    {
      printf("%f",y);
    }

  return 0;
}
