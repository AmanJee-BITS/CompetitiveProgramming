#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>0 && b>0 && c>0 && a+b+c==180)
    {
      printf("YES\n");
    }
    else
    printf("NO\n");
  }
  return 0;
}
