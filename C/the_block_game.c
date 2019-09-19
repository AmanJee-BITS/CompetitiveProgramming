#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  int t,x,temp;
  scanf("%d",&t);
  while(t--)
  {
    int rem,rev=0;
    scanf("%d",&x);
    temp=x;
    while (temp>0)
    {
      rem = temp%10;
      rev = (rev*10) + rem;
      temp=temp/10;
    }
    if(rev==x)
    {
      printf("wins\n");
    }
    else
    printf("losses\n");
  }
  return 0;
}
