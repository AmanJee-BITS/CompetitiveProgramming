#include <stdio.h>
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
    float q,p;
    float a,d;
    scanf("%f %f",&q,&p);
    if(q>=1000)
    {
      a=q*p;
      d=a - (a/10);
      printf("%f\n",d);
    }
    else
    {
      a=q*p;
      printf("%f\n",a);
    }
  }
  return 0;
}
