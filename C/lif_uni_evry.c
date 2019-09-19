#include<stdio.h>
int main()
{
	int i=0,n,j,a[10000];
	do
	{
		scanf("%d",&n);
		if(n!=42 && n>=0 && n<=9999)
			a[i]=n;
		i++;
	}
	while(n!=42);

		for(j=0; j<(i-1); j++)
			printf("%d\n", a[j]);
		return 0;
}
