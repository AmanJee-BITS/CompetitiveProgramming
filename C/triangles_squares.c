#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  int t;
  scanf("%d",&t );
  while(t--)
  {
    int x,p,s=0;
    scanf("%d",&x);
    p=x/2;
    p=p-1;
    s=p*(p+1)/2;
    printf("%d\n",s);
  }
  return 0;
}
