#include<iostream>
using namespace std;
int main()
{
	int n,c=0,cnt,ln=0,x,mx=0,i;
	cin>>n;
	for (i=0;i<n;i++)
	{
		cin>>x;
		if (x>=ln)
		c++;
		else
		c=1;
		if (c>mx)
		mx=c;
		ln=x;
	}
	cout<<mx;
}
