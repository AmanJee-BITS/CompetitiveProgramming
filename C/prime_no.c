#include<stdio.h>
int prime(int);
int main(void)
{
    int n,count,a,m;

    printf("enter the number\n");
    scanf("%d",&n);
    m=prime(n);

    if(m>2)
        printf("not prime");
    else
        printf("prime");
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
