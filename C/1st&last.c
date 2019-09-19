#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
    int x,y=0,z=0;
    scanf("%d",&x);
    int temp=x,ctr=0;
    while(temp!=0)
    {
      temp=temp/10;
      ctr++;
    }
    y=x%10;
    z=x/10*(ctr-1);
    printf("%d\n",y+z);
  }
  return 0;
}
