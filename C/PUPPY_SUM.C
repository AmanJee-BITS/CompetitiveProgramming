#include <stdio.h>

int main()
{
	int t,d,n,i,j,sum;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
        {
		scanf("%d %d",&d,&n);
		for(j=1;j<=d;j++)
		{
			sum=(n*(n+1))/2;
			n=sum;
		}
		printf("%d\n",sum);
	}
	return 0;
}
 
