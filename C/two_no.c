#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main()
{
    int t;
    long long int a,b,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld %lld %lld",&a,&b,&n);
        if(n%2==0)
        {
            if(a>b)
            {
                printf("%lld\n",a/b);
            }
            else
                printf("%lld\n",b/a);
        }
        else
        {
            if(a*2>b)
            {
                printf("%lld\n",(a*2)/b);
            }
            else
                printf("%lld\n",b/(a*2));
        }

    }
    return 0;
}
