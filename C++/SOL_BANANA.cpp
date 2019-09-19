#include <iostream>
using namespace std;

int main()
{
  int k,n,w;
  cin>>k>>n>>w;
  int i,a,s=0;
  for(i=1;i<=w;i++)
  {
    a=k*i;
    s=s+a;
  }
  if(s>n)
  cout<<s-n;
  else
  cout<<0;
  return 0;
}
