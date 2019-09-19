#include <stdio.h>
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
    float x;
    scanf("%f",&x);
    if(x<1500)
    {
      printf("%f\n",x+0.1*x+0.9*x);
    }
    else
    {
      printf("%f\n",x+500+0.98*x);
    }
  }
  return 0;
}
