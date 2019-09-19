#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long int n,i,c=0,sum=0;
  cin>>n;

  long long int a[n],b[n],s[c];
  for(i=0;i<n;i++)
  {
    cin>>a[i]>>b[i];
  }
  for(i=0;i<n;i++)
  {
      sum=sum-a[i]+b[i];
      s[c]=sum;
      c++;
  }

  long long int max= s[0];
  for(i=0;i<c;i++)
  {
    if(s[i]>=max)
    max=s[i];
  }
  cout<<max;
  return 0;
}
