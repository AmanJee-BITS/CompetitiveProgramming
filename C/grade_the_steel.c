#include <stdio.h>
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
    float c;
    int h,ts;
    scanf("%d %f %d",&h,&c,&ts);
    if(h>50 && c<0.7 && ts>5600)
    {
      printf("10\n");
    }
    else if(h>50 && c<0.7 && ts<=5600)
    {
      printf("9\n");
    }
    else if(h<=50 && c<0.7 && ts>5600)
    {
      printf("8\n");
    }
    else if(h>50 && c>=0.7 && ts>5600)
    {
      printf("7\n");
    }
    else if(h<=50 && c>=0.7 && ts<=5600)
    {
      printf("5\n");
    }
    else
    printf("6\n");
  }
  return 0;
}
