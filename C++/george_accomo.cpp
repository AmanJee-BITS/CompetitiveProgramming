#include <iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int p[n],q[n];
  int i;
  for(i=0;i<n;i++)
  {
    cin>>p[i]>>q[i];
  }
  int a=0;
  for(i=0;i<n;i++)
  {
    if(q[i]-p[i]>=2)
    a++;
  }
  cout<<a;

  return 0;
}
