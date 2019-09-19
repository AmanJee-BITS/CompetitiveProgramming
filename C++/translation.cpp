#include <iostream>
using namespace std;

int main()
{
  string a,b;
  cin>>a;
  cin>>b;
  int l1 = a.length();
  int l2 = b.length();
  int i,k=0;

    for(i=0;i<l1;i++)
    {
      if(a[i]==b[l1-i-1])
      {k=k+1;}
      else
      k=0;
    }
    if(k==l1)
    cout<<"YES";
    else
    cout<<"NO";

  return 0;
}
