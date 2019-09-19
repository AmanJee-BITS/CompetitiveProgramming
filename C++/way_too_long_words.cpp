#include <iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int i;
  while(n--)
  {
    string s;
    cin>>s;

    int l=s.length();
    if(l>10)
    {
      int p=l-2;
      char c=s[l-1];
      cout<<s[0]<<p<<c<<endl;
    }
    else
    cout<<s<<endl;
  }
  return 0;
}
