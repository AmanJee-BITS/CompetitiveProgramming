#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
  int t,x;
  scanf("%d",&t);
  while(t--)
  {
    int rem,rev=0;
    scanf("%d",&x);
    while(x>0)
    {
      rem = x%10;
      rev = rev*10 +rem;
      x=x/10;
    }
    printf("%d\n",rev);
  }
  return 0;
}
