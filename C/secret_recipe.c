#include <stdio.h>
#include <math.h>
int main()
{
  int T;
  scanf("%d",&T);
  while(T--)
  {
    float x1,x2,x3,v1,v2;
    float t1,t2;
    scanf("%f %f %f %f %f",&x1, &x2, &x3, &v1, &v2);
    if(x1<x3 && x2>x3)
    {
      t1=(x3-x1)/v1;
      t2=(x2-x3)/v2;
      if(t1<t2)
      {
        printf("CHEF\n");
      }
     else if(t1>t2)
      {
        printf("KEFA\n");
      }
      else
      {
        printf("DRAW\n");
      }
    }
  }
  return 0;
}
