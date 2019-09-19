#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  int t,x;
  int y=0,z=0;
  scanf("%d",&t);
  while(t--)
  {
    int y=0,z=0,ctr=0;
    long int p=0;
    scanf("%d",&x);
    int temp=x;
    while(temp!=0)
    {
      temp=temp/10;
      ctr++;
    }
    y=x%10;
    p=pow(10,ctr-1);
    z=x/p;
    printf("%d\n",y+z);
  }
  return 0;
}
