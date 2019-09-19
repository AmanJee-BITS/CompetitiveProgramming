#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	int p=0,i,k;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n;i++)
	{
		p = p + a[i];
	}
	if(p%4==0)
		printf("%d",p/4);
	else
		k=(p/4)+1;
		printf("%d\n",k);
		return 0;	
}