#include <stdio.h>
#include <math.h>
int main()
  {
   long long t,n;
    scanf("%lld",&t);
    while(t--)
    {
      scanf("%lld",&n);
      long long j=1;
      while (n!=0)
       {
        j=n*j;
        n--;
      }
      printf("%lld\n",j);
    }
    return 0;
  }
