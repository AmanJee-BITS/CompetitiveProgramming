#include <stdio.h>

int main()
{
	int t;
  long n,k,i,max,rem;
	scanf("%d",&t);
	while(t--)
	{
		max=0;
		scanf("%ld %ld",&n,&k);
		for(i=1;i<=k;i++)
		{
		 rem=n%i;
		 if(rem>max)
		 max=rem;
		}
		printf("%ld\n",max);
	}
	return 0;
}
