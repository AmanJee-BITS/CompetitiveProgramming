#include<iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int x[n],y[n],z[n];
  for(int i=0;i<n;i++)
  {
    cin>>x[i]>>y[i]>>z[i];
  }
  int sx=0,sy=0,sz=0;
  for(int i=0;i<n;i++)
  {
    sx=sx+x[i];
    sy=sy+y[i];
    sz=sz+z[i];
  }
  if(sx==0 && sy==0 && sz==0)
  cout<<"YES";
  else
  cout<<"NO";

  return 0;
}
