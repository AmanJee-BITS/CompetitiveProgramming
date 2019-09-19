#include <iostream>
using namespace std;
int main()
{
  string s;
  cin>>s;

  int l = s.length();
  int i,a=0;
  for(i=0;i<l;i++)
  {
    if(s[i]==72 || s[i]==81 || s[i]==57)
    a++;
  }
  if(a>0)
  cout<<"YES";
  else
  cout<<"NO";
  return 0;
}
