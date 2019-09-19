#include <iostream>
using namespace std;

int main()
{
  int n,i;
  cin>>n;
   char s[n];
   for(i=0;i<n;i++)
  cin>>s[i];
  int a=0;
  for(i=0;i<n;i++)
  {
    if(s[i]==s[i+1])
    a++;
  }
  cout<<a;
  return 0;
}
