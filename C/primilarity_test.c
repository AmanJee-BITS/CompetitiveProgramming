#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int prime(int);
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
    int x,m;
    scanf("%d",&x);
    m=prime(x);

    if(m>2)
    printf("no\n");
    else
    printf("yes\n");
  }
  return 0;
}

int prime(int n)
    {
    int i,count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }

    }
    return(count);
    }
