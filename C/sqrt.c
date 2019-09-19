#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  int t,n,s;
  scanf("%d\n",&t);
  while(t--)
  {
    scanf("%d",&n);
    s = sqrt(n);
    printf("%d\n",s);
  }
  return 0;
}
